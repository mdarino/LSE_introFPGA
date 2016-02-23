
----------------------------------------------------------------------------------
--! @file     preSuma.vhd
--! @brief 	  Pre Suma
--! @author   Marcos Darino (MD)
--! @version  20160122 v0.0.1   MD Initial release.
----------------------------------------------------------------------------------


--LIBRARY
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use WORK.floatPointConst.ALL;

--! @brief Prepare the operands and exponent to be add
entity preSuma is
	port(
			A1,A2,A3,A4: in std_logic_vector (7 downto 0);  --! Operand from Picobraze (first number)
			B1,B2,B3,B4: in std_logic_vector (7 downto 0);	--! Operand from Picobraze (second number)
			ope1, ope2: out std_logic_vector (BUS_OPE downto 0); --! Operands ready to the adder
			finalExpon: out std_logic_vector (EXP_WIDTH downto 0); --! Final exponent
			finalSign: out std_logic; --! Final sing
			ena: out std_logic; --! Enable the module
			result: out std_logic_vector (TO_WIDTH downto 0);
			ca: out std_logic;
			operation: in std_logic; --! If it is 0 add or 1 subtract
			--tipeOfOperation: in std_logic_vector (7 downto 0);  --! 
			clk: in std_logic  --! clock
		);

end preSuma;

--! @brief Define the preSuma operations
architecture Behavioral of preSuma is

begin
	
	--! Procces to prepare the info
	process(clk)
		--Variables
		
		--Variables to store the number from PicoBlaze
		variable A:       std_logic_vector(TO_WIDTH downto 0);
		variable B:       std_logic_vector(TO_WIDTH downto 0);
		--This variables are used to separate the info
		variable Asig:    std_logic;
		variable Bsig:    std_logic;
		variable Aexp:    std_logic_vector(EXP_WIDTH downto 0);
		variable Bexp:    std_logic_vector(EXP_WIDTH downto 0);
		variable Aman:    std_logic_vector(BUS_OPE downto 0);
		variable Bman:    std_logic_vector(BUS_OPE downto 0);

		--Store the result
		variable add_result:     std_logic_vector(BUS_OPE downto 0);  
		
		--Store the output values
		variable out_result:     	std_logic_vector(TO_WIDTH downto 0);
		variable out_sig:     		std_logic;
		variable out_exp:     		std_logic_vector(EXP_WIDTH downto 0);
		
		variable out_exp_max:		std_logic_vector(EXP_WIDTH downto 0); --only store the max of the exp
		variable zero:              std_logic_vector(TO_WIDTH downto 0); 

		--Check the info
		variable expHigher: std_logic:='0';  --check how exp is bigger - 1 if A 0 if B
		variable numHigher:    std_logic:='0'; --check how number is bigger - 1 if A 0 if B
			--Variable to save the result of expA-ExpB
		variable expDif:    integer:=0;


		begin

		--Save the max value of the exp
		out_exp_max:=(others => '1');
		zero:=(others => '0');
		--Take all the operand from the picoblaze and merge in one
		A:=A1&A2&A3&A4;
		B:=B1&B2&B3&B4;

		--Store the sign of both
		Asig:=A(TO_WIDTH);
		Bsig:=B(TO_WIDTH);
		
		--Store the exponent of both
		Aexp:=A(TO_WIDTH-1 downto TO_WIDTH-EXP_WIDTH-1);
		Bexp:=B(TO_WIDTH-1 downto TO_WIDTH-EXP_WIDTH-1);
		

		--Store the mantisa of both (clean the vectors)
		Aman:= (others => '0'); 
		Bman:= (others => '0');
		
		--Add a 1 in the right
		  --Bman:= Bman(BUS_OPE-1 downto 0) & '1';
		--To add values in the right side of the std_logic_vector
		  --Aman:= Aman(BUS_OPE-OP_WIDTH-2 downto 0) & '1' & A(OP_WIDTH downto 0);
		
		--Store the mantisa of both (add the 1, and the mantissa, the others are zero)

		if A>zero and Aexp>zero then  --if it is zero not add the 1		
		Aman:= '1' & A(OP_WIDTH downto 0); 
		end if;
		if B>zero and Bexp>zero then
		Bman:= '1' & B(OP_WIDTH downto 0);
		end if;
		------------------
		--CHECK THE EXPONENT and WHO IS BIGGER
		------------------

		--Check what exp is higher than the other
		--If it is necesarry, modify the operands to left with the same exponent
		--HELP
				--optional_label: for parameter in range loop
					--sequential statements
				--end loop label;
		if Aexp > Bexp then
			expHigher :=  '1';  -- A exp is higher
			numHigher :=  '1';
				--Subtract the exponent to obtain the difference
			expDif:=to_integer(unsigned(Aexp) - unsigned(Bexp));
			--do the shiftter
			for i in 0 to (expDif-1) loop
				Bman:='0' & Bman(BUS_OPE downto 1);  --remove the last zero
			end loop;
		else 
			expHigher :=  '0';  
			numHigher :=  '0';
			--Subtract the exponent to obtain the difference
			expDif:=to_integer(unsigned(Bexp) - unsigned(Aexp));
			--do the shiftter
			for i in 0 to (expDif-1) loop
				Aman:='0' & Aman(BUS_OPE downto 1);  --remove the last zero
			end loop;	
		end if;




		--Check what man is higher than the other
		if Aexp = Bexp then
			if  Aman > Bman then
				numHigher :=  '1';  --A is bigger
			else
				numHigher :=  '0';  --B is bigger
			end if;
		end if;

		--Save the higher exp to the final exponent
		if expHigher='1' then
			out_exp :=  Aexp;
		else
			out_exp :=  Bexp;
		end if;
		




		------------------
		--CHECK THE SING
		------------------
		
		---SUBTARCT--
		if operation='1' then
			Bsig:= not Bsig;
		end if;	
		 
		if Asig=Bsig then
		 	out_sig:=Asig;  --can any, are the same
		 else
		 	if numHigher='1' then
		 		out_sig:=Asig;
		 	else
		 		out_sig:=Bsig;
		 	end if;
		end if;
		 
		------------------
		--RESULT--
		------------------

	
		Aman:= '0' & Aman(BUS_OPE downto 1); 
		Bman:= '0' & Bman(BUS_OPE downto 1);

		--complete the output operands --save the values
		ope1 <= Aman;
		ope2 <= Bman;

		--ADDER--
		

		if Asig=Bsig then
			add_result:=std_logic_vector(unsigned(Aman) + unsigned(Bman));
			--If there is carry, add one to the exponent
			if add_result(BUS_OPE)='1' then
				if out_exp<out_exp_max then
					out_exp:= std_logic_vector(unsigned(out_exp) + 1);
					add_result:='1' & add_result(BUS_OPE downto 1);
				end if;
			end if;
		else
		 	if numHigher='1' then   --order the bigger in the first operand
		 		add_result:=std_logic_vector(unsigned(Aman) - unsigned(Bman));
		 	else
		 		add_result:=std_logic_vector(unsigned(Bman) - unsigned(Aman));
		 	end if;
				while add_result(BUS_OPE-1)='0' and out_exp>(not out_exp_max) loop
				   out_exp:= std_logic_vector(unsigned(out_exp) -1);
				   add_result:= add_result(BUS_OPE-1 downto 0) & '0';
				end loop;
		end if;



		--Check the Exp, if it is max, clean the mantissa -> infinite
		if out_exp=out_exp_max then
			add_result:= (others => '0');
		end if;
		
		--Sing + Exponent + result (withput the carry and the 1 of the representation)
		out_result:=out_sig& out_exp & add_result((BUS_OPE-2) downto 0);
		
		
		
		
		------------------
		--OUTPUTS--
		------------------
		result <= out_result;
		ca <= add_result(BUS_OPE);
		finalExpon<=out_exp;
		finalSign<=out_sig;



	end process;

end Behavioral;




--LIBRARY:
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use WORK.floatPointConst.ALL;

--ENTITY:
entity PreSuma_test is

end PreSuma_test;

--ARCHITECTURE:
	--Simulate the clock and the reset

architecture PreSuma_test_arq of PreSuma_test is
	component PreSuma is
		port(  	
			A1,A2,A3,A4: in std_logic_vector (7 downto 0);  
			B1,B2,B3,B4: in std_logic_vector (7 downto 0);	
			ope1, ope2: out std_logic_vector (BUS_OPE downto 0); 
			finalExpon: out std_logic_vector (EXP_WIDTH downto 0); 
			finalSign: out std_logic; 
			ena: out std_logic; --! Enable the module
			result: out std_logic_vector (TO_WIDTH downto 0);
			ca: out std_logic;
			operation: in std_logic; --! If it is 0 add or 1 subtract
			clk: in std_logic  --! clock
			);
	end component;
	
	signal		A1_t: std_logic_vector (7 downto 0):="11000111";
	signal		A2_t: std_logic_vector (7 downto 0):="11011010"; 
	signal		A3_t: std_logic_vector (7 downto 0):="00000000"; 
	signal		A4_t: std_logic_vector (7 downto 0):="00010000";  

	signal		B1_t: std_logic_vector (7 downto 0):="01000101";
	signal		B2_t: std_logic_vector (7 downto 0):="01011010";
	signal		B3_t: std_logic_vector (7 downto 0):="00000000";
	signal		B4_t: std_logic_vector (7 downto 0):="00010000";

	signal		ope1_t: std_logic_vector (BUS_OPE downto 0); 
	signal		ope2_t: std_logic_vector (BUS_OPE downto 0); 
	signal		finalExpon_t: std_logic_vector (EXP_WIDTH downto 0); 
	signal		finalSign_t: std_logic; 
	
	signal		ena_t: std_logic; 
	signal		result_t: std_logic_vector (TO_WIDTH downto 0);
	signal		ca_t: std_logic;
	signal		operation_t: std_logic; 

	signal		clk_t: std_logic:='0';  

begin
	
	clk_t <= not clk_t after 100 ns; 
	operation_t <='0';
	ena_t <='0';

	DUT: PreSuma port map(
	 A1=> A1_t,
	 A2=> A2_t, 
	 A3=> A3_t, 
	 A4=> A4_t,  

	 B1=> B1_t,
	 B2=> B2_t,
	 B3=> B3_t,
	 B4=> B4_t,

	ope1 => ope1_t,
	ope2 => ope2_t,
	finalExpon => finalExpon_t, 
	finalSign => finalSign_t,

	ena => ena_t,
	result => result_t,
	ca => ca_t,
	operation => operation_t,

	clk => clk_t
	);

end PreSuma_test_arq;

--END