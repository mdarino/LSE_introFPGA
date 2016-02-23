
----------------------------------------------------------------------------------
--! @file     FloatPointALU.vhd
--! @brief 	  Do the add or the subtract of two float point number
--! @author   Marcos Darino (MD)
--! @version  20160127 v0.0.1   MD Initial release.
----------------------------------------------------------------------------------

-----------
--LIBRARY--
-----------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use WORK.floatPointConst.ALL;

-----------
--ENTITY---
-----------

entity FloatPointALU is
	port(
			opeA: in std_logic_vector (TO_WIDTH downto 0);  --! Operand from Picobraze (first number)
			opeB: in std_logic_vector (TO_WIDTH downto 0);	--! Operand from Picobraze (second number)
			ena: in std_logic; --! Enable the module
			start: in std_logic; --!Start the operation, it is to clean the flag of the interrupt
			result: out std_logic_vector (TO_WIDTH downto 0); --! Output the result of the operation
			operation: in std_logic; --! If it is 0 add or 1 subtract
			ready:out std_logic:='0'; --! Output if the ALU end the operation
			clk: in std_logic  --! clock
		);

end FloatPointALU;


-----------------
--ARCHITECTURE---
-----------------

architecture Behavioral of FloatPointALU is
begin
	--! Procces to add or subtract the numbers
	process(clk)
		
		
		-----------
		--Variables
		-----------
		
		--This variables are used to separate the info
		variable Asig:    std_logic;
		variable Bsig:    std_logic;
		variable Aexp:    std_logic_vector(EXP_WIDTH downto 0);
		variable Bexp:    std_logic_vector(EXP_WIDTH downto 0);
		variable Aman:    std_logic_vector(BUS_OPE downto 0);
		variable Bman:    std_logic_vector(BUS_OPE downto 0);

		--Store the result of the mantissa
		variable add_result:     std_logic_vector(BUS_OPE downto 0);  
		
		--Store the output values
		variable out_result:     	std_logic_vector(TO_WIDTH downto 0);
		variable out_sig:     		std_logic;
		variable out_exp:     		std_logic_vector(EXP_WIDTH downto 0);
		
		-- This two variables only store the max value and a clean vector - uses to compare		
		variable out_exp_max:		std_logic_vector(EXP_WIDTH downto 0); --only store the max of the exp
		variable zero:              std_logic_vector(TO_WIDTH downto 0);  --is always zero

		--Check the info
		variable expHigher: std_logic:='0';  --check how exp is bigger -> 1 if A 0 if B
		variable numHigher:    std_logic:='0'; --check how number is bigger -> 1 if A 0 if B
		--Variable to save the result of expA-ExpB
		variable expDif:    integer:=0;

		-------Start the process-------
		begin

		--Check if is other number, to know if we need interrupt again
		if start='0' then
			ready<='0';
		end if;
		
		
		--Save the max value of the exp
		out_exp_max:=(others => '1');
		--Clean the zero vector
		zero:=(others => '0');
		
		-------Separate the numbers in the diferent part of the float point standart-------
		
		--Store the sign of both
		Asig:=opeA(TO_WIDTH);
		Bsig:=opeB(TO_WIDTH);
		
		--Store the exponent of both
		Aexp:=opeA(TO_WIDTH-1 downto TO_WIDTH-EXP_WIDTH-1);
		Bexp:=opeB(TO_WIDTH-1 downto TO_WIDTH-EXP_WIDTH-1);
		
		--Clean the vectors
		Aman:= (others => '0'); 
		Bman:= (others => '0');
		
		--Store the mantisa of both (add the 1, and the mantissa, the others are zero)

		if opeA>zero and Aexp>zero then  --if it is zero not add the 1		
		Aman:= '1' & opeA(OP_WIDTH downto 0); 
		end if;
		if opeB>zero and Bexp>zero then
		Bman:= '1' & opeB(OP_WIDTH downto 0);
		end if;
		
		-------Check the exponent and search who is bigger-------

		--Check what exp is higher than the other
		--If it is necesarry, modify the operands to left with the same exponent

				--HELP TO USE THE FOR
						--optional_label: for parameter in range loop
							--sequential statements
						--end loop label;
						
		if Aexp > Bexp then
			expHigher :=  '1';  -- A exp is higher
			numHigher :=  '1';  -- and A is bigger too
			--Subtract the exponent to obtain the difference
			expDif:=to_integer(unsigned(Aexp) - unsigned(Bexp));
			--do the shiftter
			for i in 0 to (expDif-1) loop
				Bman:='0' & Bman(BUS_OPE downto 1);  --remove the last zero
			end loop;
			
		else 
		
			expHigher :=  '0';   -- B exp is higher
			numHigher :=  '0';   -- so b is bigger too
			--Subtract the exponent to obtain the difference
			expDif:=to_integer(unsigned(Bexp) - unsigned(Aexp));
			--do the shiftter
			for i in 0 to (expDif-1) loop
				Aman:='0' & Aman(BUS_OPE downto 1);  --remove the last zero
			end loop;	
		end if;


		--Check what mantissa is higher than the other
		if Aexp = Bexp then
			if  Aman > Bman then
				numHigher :=  '1';  --A is bigger
			else
				numHigher :=  '0';  --B is bigger
			end if;
		end if;

		--Save the higher exp to the final exponent
		if expHigher='1' then
			out_exp :=  Aexp;   --will output the A exponent
		else
			out_exp :=  Bexp;	--will output the B exponent
		end if;
		
		------------------
		--CHECK THE SING
		------------------
		
		---SUBTARCT--
		if operation='1' then
			Bsig:= not Bsig;
		end if;	
		---ADDER--- 
		if Asig=Bsig then
		 	out_sig:=Asig;  --can be anyone, are the same
		 else
		 	if numHigher='1' then  -- the bigger set the sign
		 		out_sig:=Asig;  
		 	else
		 		out_sig:=Bsig;
		 	end if;
		end if;
		 
		------------------
		--RESULT--
		------------------

			--We add a 0 in the beggining to the carry bit
		   Aman:= '0' & Aman(BUS_OPE downto 1); 
		   Bman:= '0' & Bman(BUS_OPE downto 1);

		
		--ADDER  &  SUBTRACT--
		
		if Asig=Bsig then

			--If the sing are the same, add the values
			add_result:=std_logic_vector(unsigned(Aman) + unsigned(Bman));
			--If there is carry, add one to the exponent
			if add_result(BUS_OPE)='1' then 
				if out_exp<out_exp_max then   --check if the exp is the max
					out_exp:= std_logic_vector(unsigned(out_exp) + 1);  --add one to the exponent
					add_result:='1' & add_result(BUS_OPE downto 1);  --shift the mantissa by one
				end if;
			end if;
		else
			-- If the sing are different subtract the values
			if numHigher='1' then   --order the bigger in the first operand
		 		--add_result:=std_logic_vector(unsigned(Aman) - unsigned(Bman));
		 		Bman:=not Bman;
		 		Bman:= std_logic_vector(unsigned(Bman) + 1);
		 		add_result:=std_logic_vector(unsigned(Aman) + unsigned(Bman)+1);

		 	else
		 		--add_result:=std_logic_vector(unsigned(Bman) - unsigned(Aman));
		 	end if;
			--Normalize the mantissa and the exponent
				while add_result(BUS_OPE-1)='0' and out_exp>(not out_exp_max) loop
				   out_exp:= std_logic_vector(unsigned(out_exp) -1);
				   add_result:= add_result(BUS_OPE-1 downto 0) & '0';
				end loop;
		end if;



		--Check the Exp, if it is max, clean the mantissa -> infinite case
		if out_exp=out_exp_max then
			add_result:= (others => '0');
		end if;
		
		--Sing + Exponent + result (withput the carry and the 1 of the representation)
		out_result:=out_sig& out_exp & add_result((BUS_OPE-2) downto 0);
		
		------------------
		--OUTPUTS--
		------------------
		result <= out_result;
		
		if start='1' then
			ready<='1';
		end if;
		
	end process;

end Behavioral;




--LIBRARY:
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use WORK.floatPointConst.ALL;

--ENTITY:
entity FloatPointALU_test is

end FloatPointALU_test;

--ARCHITECTURE:
	--Simulate the ALU with two numbers

architecture FloatPointALU_test_arq of FloatPointALU_test is
	component FloatPointALU is
		port(
				opeA: in std_logic_vector (TO_WIDTH downto 0);  --! Operand from Picobraze (first number)
				opeB: in std_logic_vector (TO_WIDTH downto 0);	--! Operand from Picobraze (second number)
				ena: in std_logic; --! Enable the module
				start: in std_logic; --!Start the operation, it is to clean the flag of the interrupt
				result: out std_logic_vector (TO_WIDTH downto 0); --! Output the result of the operation
				operation: in std_logic; --! If it is 0 add or 1 subtract
				clk: in std_logic  --! clock
			);

	end component;
	
	--VALUES TO BE ADDER OR SUBTRACT
	signal		opeA_t: std_logic_vector (TO_WIDTH downto 0):="01000010111110110101011100001010";
	signal		opeB_t: std_logic_vector (TO_WIDTH downto 0):="01000001101111000000000000000000"; 
		
	signal		ena_t: std_logic; 
	signal		start_t: std_logic;
	signal		result_t: std_logic_vector (TO_WIDTH downto 0);
	signal		operation_t: std_logic; 

	signal		clk_t: std_logic:='0';  

begin
	
	--Set a clock
	clk_t <= not clk_t after 100 ns; 
	
	--SET THE ADD OR THE SUTRACT
	operation_t <='0';
	ena_t <='1';
	start_t <='1';
	
	DUT: FloatPointALU port map(
		
		opeA=> opeA_t,
		opeB=> opeB_t, 
		ena => ena_t,
		result => result_t,
		start => start_t,
		operation => operation_t,
		
		clk => clk_t
	);

end FloatPointALU_test_arq;

--END