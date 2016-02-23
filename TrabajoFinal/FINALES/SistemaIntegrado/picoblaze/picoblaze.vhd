----------------------------------------------------------------------------------
--! @file     picoblaze.vhd
--! @brief 	  picoblaze
--! @author   Marcos Darino (MD)
--! @version  20160122 v0.0.1   MD Initial release.
----------------------------------------------------------------------------------


--LIBRARY
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use WORK.floatPointConst.ALL;


--Then entity of this system has outputs input of the system, the black box
--In this case, we will uses his output to simulate the system
--We will work with the picoblaze and the ALU unit. The output values 
--will be show by this outputs

--! @brief Integrates the picoblaze core and the float ALU, with outputs to simulate the system.

entity picoblaze is
    Port ( 
			--R1 to R4 Will show the output of the float ALU
			--This values will be send to the picoblaze when the ALU finish
		   R1 : out  STD_LOGIC_VECTOR (7 downto 0);  
           R2 : out  STD_LOGIC_VECTOR (7 downto 0);
           R3 : out  STD_LOGIC_VECTOR (7 downto 0);
           R4 : out  STD_LOGIC_VECTOR (7 downto 0);
			--Rp1 to Rp4 Will show the output of the float ALU but first pass 
			--through the picoblaze - like the switch/led example.
		   Rp1 : out  STD_LOGIC_VECTOR (7 downto 0);
           Rp2 : out  STD_LOGIC_VECTOR (7 downto 0);
           Rp3 : out  STD_LOGIC_VECTOR (7 downto 0);
           Rp4 : out  STD_LOGIC_VECTOR (7 downto 0);
		   --A1 to A4 will show the first number from the picoblaze
           A1 : out  STD_LOGIC_VECTOR (7 downto 0);
           A2 : out  STD_LOGIC_VECTOR (7 downto 0);
           A3 : out  STD_LOGIC_VECTOR (7 downto 0);
           A4 : out  STD_LOGIC_VECTOR (7 downto 0);
		   --B1 to B4 will show the second number from the picoblaze
		   B1 : out  STD_LOGIC_VECTOR (7 downto 0);
           B2 : out  STD_LOGIC_VECTOR (7 downto 0);
           B3 : out  STD_LOGIC_VECTOR (7 downto 0);
           B4 : out  STD_LOGIC_VECTOR (7 downto 0);
		   --ope will show what operation send the picoblaze 	
           ope : out  STD_LOGIC_VECTOR (7 downto 0);           
		   --System clock	
           clk : in  STD_LOGIC
		   );
end picoblaze;


-------------------------------------------------------
-- Start of test architecture
-------------------------------------------------------

architecture Behavioral of picoblaze is

--
-- Declaration of KCPSM3 - the core of the picoblaze
--
	COMPONENT kcpsm3
	PORT(
		instruction : IN std_logic_vector(17 downto 0);
		in_port : IN std_logic_vector(7 downto 0);
		interrupt : IN std_logic;
		reset : IN std_logic;
		clk : IN std_logic;          
		address : OUT std_logic_vector(9 downto 0);
		port_id : OUT std_logic_vector(7 downto 0);
		write_strobe : OUT std_logic;
		out_port : OUT std_logic_vector(7 downto 0);
		read_strobe : OUT std_logic;
		interrupt_ack : OUT std_logic
		);
	END COMPONENT;

--
-- declaration of program ROM -- where is the program that we did
--

	COMPONENT picocode
	PORT(
		address : IN std_logic_vector(9 downto 0);
		clk : IN std_logic;          
		instruction : OUT std_logic_vector(17 downto 0)
		);
	END COMPONENT;

  COMPONENT FloatPointALU
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
	END COMPONENT;



--
-- Signals used to connect KCPSM3 to program ROM and I/O logic
--
signal address         : std_logic_vector(9 downto 0);
signal instruction     : std_logic_vector(17 downto 0);
signal port_id         : std_logic_vector(7 downto 0);
signal out_port        : std_logic_vector(7 downto 0);
signal in_port         : std_logic_vector(7 downto 0);
signal write_strobe    : std_logic;
signal read_strobe     : std_logic;
signal interrupt       : std_logic:='0';
signal interrupt_ack   : std_logic;

--
-- Signals used to connect the ALU
--
signal 			opeA 		: std_logic_vector (TO_WIDTH downto 0);
signal 			opeB		: std_logic_vector (TO_WIDTH downto 0);
signal 			ena 		: std_logic;
signal 			start 		: std_logic;
signal 			result 		: std_logic_vector (TO_WIDTH downto 0);
signal 			operation	: std_logic;			
signal 			ready 		: std_logic;


--
-- Signals used to connect the ALU and picoblaze
--
signal 			R1_s,R2_s,R3_s,R4_s 	: STD_LOGIC_VECTOR (7 downto 0);  
signal 			Rp1_s,Rp2_s,Rp3_s,Rp4_s : STD_LOGIC_VECTOR (7 downto 0);
signal          A1_s,A2_s,A3_s,A4_s		: STD_LOGIC_VECTOR (7 downto 0);
signal 			B1_s,B2_s,B3_s,B4_s		: STD_LOGIC_VECTOR (7 downto 0);
signal 			ope_s				 	: STD_LOGIC_VECTOR (7 downto 0);  
signal 			start_s				 	: STD_LOGIC_VECTOR (7 downto 0); 

--signal for the other case of the switch case - check if it is necesary
signal otherscase: std_logic;
--signal to avoid many interrupt
signal oneinterrupt: std_logic:='1';

begin

--Port map of the picoblaze

  processor: kcpsm3
    port map(      address => address,
               instruction => instruction,
                   port_id => port_id,
              write_strobe => write_strobe,
                  out_port => out_port,
               read_strobe => read_strobe,
                   in_port => in_port,
                 interrupt => interrupt,
             interrupt_ack => interrupt_ack,
                     reset => '0',
                       clk => clk);
 

--Port map of the ROM of the picoblaze
 program_rom: picocode
    port map(      address => address,
               instruction => instruction,
                       clk => clk);


--Port map of the FloatPoint_ALU
FloatPoint_ALU: FloatPointALU
	 port map(
	  		opeA=>opeA,
			opeB=>opeB,
			ena=>ena, 
			start=>start,
			result=>result,
			operation=>operation,
			ready=>ready,
			clk=>clk
 	 );

--START THE PROCCES TO SEND AND RECIVE THE INFORMATION OF THE PICOBLAZE					   
					   
	IO_registers: process(clk)
	begin
		--Read the result, only when the event of the interrupt happen
		if read_strobe='1' then
		  C1: case port_id is
			  when "00000001" => in_port <=R1_s;
			  when "00000010" => in_port <=R2_s;
			  when "00000011" => in_port <=R3_s;
			  when "00000100" => in_port <=R4_s;
			  when others => otherscase <= '1';
		  end case C1;
		end if;
		--Write all the values from the picoblaze
		if write_strobe='1' then
		  C2: case port_id is
			  when "00000101" => A1_s <= out_port;
			  when "00000110" => A2_s <= out_port;
			  when "00000111" => A3_s <= out_port;
			  when "00001000" => A4_s <= out_port;
			  when "00001001" => B1_s <= out_port;
			  when "00001010" => B2_s <= out_port;
			  when "00001011" => B3_s <= out_port;
			  when "00001100" => B4_s <= out_port;
			  when "00001101" => ope_s <= out_port;
			  when "00001110" => start_s <= out_port;
			  when "00001111" => Rp1_s <= out_port;
			  when "00010000" => Rp2_s <= out_port;
			  when "00010001" => Rp3_s <= out_port;
			  when "00010010" => Rp4_s <= out_port;
			  when others => otherscase <= '1';
		  end case C2;
		end if;
	end process;

	ALU: process (clk)

	begin
	--Send the merge value from the picoblaze 8x4 = 32 bits  => to Floatpoint_ALU
	opeA <= A1_s&A2_s&A3_s&A4_s;
	opeB <= B1_s&B2_s&B3_s&B4_s;
	--Send the operation => to Floatpoint_ALU
	operation <= ope_s(0);
	--Send the start bit => to Floatpoint_ALU
	start <= start_s(0);

	--To simulate -- set all as outputs
	
	ope<=ope_s;

	A1<=A1_s;
	A2<=A2_s;
	A3<=A3_s;
	A4<=A4_s;

	B1<=B1_s;
	B2<=B2_s;
	B3<=B3_s;
	B4<=B4_s;

	R1<=R1_s;
	R2<=R2_s;
	R3<=R3_s;
	R4<=R4_s;

	Rp1<=Rp1_s;
	Rp2<=Rp2_s;
	Rp3<=Rp3_s;
	Rp4<=Rp4_s;


	end process;

--START THE PROCCES CONTROL THE INTERRUPT
	
	interrupt_control: process(clk)
	begin

		if clk'event and clk='1' then
			if interrupt_ack='1' then    --if we ack the interrupt, we clean it
				interrupt <= '0';
			elsif ready='1' and oneinterrupt='1' then  --If the Floatpoint is ready
				--we have a delay between the interrupt and the answer to stop the floatpoint_alu
				--to avoid enter many times in the interrupt routine, we use this flag
				oneinterrupt<='0';   
				--Interrupt
				interrupt <= '1'; 
				--Update the values, to simulate
				R1_s <= result(31 downto 24);
				R2_s <= result(23 downto 16);
				R3_s <= result(15 downto 8);
				R4_s <= result(7 downto 0);
			else
				interrupt <= interrupt;
			end if;
			
			if ready='0' then
				--if ready=0, we can clean the oneinterrupt
				oneinterrupt<='1';
			end if;
		end if; 

	end process interrupt_control;	
	

end Behavioral;



-------------------------------------------------------
-------------------------------------------------------
--SIMULATION
-------------------------------------------------------


--LIBRARY:
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use WORK.floatPointConst.ALL;

--ENTITY:
entity picoblaze_test is

end picoblaze_test;

--ARCHITECTURE:
	--Simulate the system.

architecture picoblaze_test_arq of picoblaze_test is
	
	--declaration of the picoblaze (ALU+picoblaze)
	component picoblaze is
    Port ( 	
				A1,A2,A3,A4: out std_logic_vector (7 downto 0);  
				B1,B2,B3,B4: out std_logic_vector (7 downto 0);
				R1,R2,R3,R4 : out  STD_LOGIC_VECTOR (7 downto 0);
				Rp1,Rp2,Rp3,Rp4 : out  STD_LOGIC_VECTOR (7 downto 0);
				ope: out std_logic_vector (7 downto 0);
				clk : in  STD_LOGIC);
	end component;
	
	--All the signal

	signal		clk_t: std_logic:='0';  

	signal		A1_t: std_logic_vector (7 downto 0);
	signal		A2_t: std_logic_vector (7 downto 0); 
	signal		A3_t: std_logic_vector (7 downto 0); 
	signal		A4_t: std_logic_vector (7 downto 0);  

	signal		B1_t: std_logic_vector (7 downto 0);
	signal		B2_t: std_logic_vector (7 downto 0);
	signal		B3_t: std_logic_vector (7 downto 0);
	signal		B4_t: std_logic_vector (7 downto 0);

	signal		R1_t: std_logic_vector (7 downto 0);
	signal		R2_t: std_logic_vector (7 downto 0);
	signal		R3_t: std_logic_vector (7 downto 0);
	signal		R4_t: std_logic_vector (7 downto 0);

	signal		Rp1_t: std_logic_vector (7 downto 0);
	signal		Rp2_t: std_logic_vector (7 downto 0);
	signal		Rp3_t: std_logic_vector (7 downto 0);
	signal		Rp4_t: std_logic_vector (7 downto 0);	

	signal		ope_t: std_logic_vector (7 downto 0);

begin
	
	--Set the clock
	clk_t <= not clk_t after 20 ns; 

	DUT: picoblaze port map(
	 	
		 A1=> A1_t,
		 A2=> A2_t, 
		 A3=> A3_t, 
		 A4=> A4_t,  

		 B1=> B1_t,
		 B2=> B2_t,
		 B3=> B3_t,
		 B4=> B4_t,	

		 R1=> R1_t,
		 R2=> R2_t,
		 R3=> R3_t,
		 R4=> R4_t,

		 Rp1=> Rp1_t,
		 Rp2=> Rp2_t,
		 Rp3=> Rp3_t,
		 Rp4=> Rp4_t,		 

		 ope => ope_t,

	 	 clk => clk_t
	);

end picoblaze_test_arq;

--END