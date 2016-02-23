
----------------------------------------------------------------------------------
--! @file     preSuma.vhd
--! @brief 	  Pre Suma
--! @author   Marcos Darino (MD)
--! @version  20160122 v0.0.1   MD Initial release.
----------------------------------------------------------------------------------


--LIBRARY
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


use WORK.floatPointConst.ALL;

--! @brief Prepare the operands and exponent to be add
entity preSuma is
	port(
			A1,A2,A3,A4: in std_logic_vector (7 downto 0);  --! Operand from Picobraze (first number)
			B1,B2,B3,B4: in std_logic_vector (7 downto 0);	--! Operand from Picobraze (second number)
			ope1, ope2: out std_logic_vector (BUS_OPE downto 0); --! Operands ready to the adder
			finalExpon1: out std_logic_vector (EXP_WIDTH downto 0); --! Final exponent
			finalExpon2: out std_logic_vector (EXP_WIDTH downto 0);
			finalSign: out std_logic; --! Final sing
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
	variable Asig:    std_logic;
	variable Bsig:    std_logic;
	variable Aexp:    std_logic_vector(EXP_WIDTH downto 0);
	variable Bexp:    std_logic_vector(EXP_WIDTH downto 0);
	variable Aman:    std_logic_vector(BUS_OPE downto 0);
	variable Bman:    std_logic_vector(BUS_OPE downto 0);

	begin

	--Take all the operand from the picoblaze and merge in one
	A:=A1&A2&A3&A4;
	B:=B1&B2&B3&B4;

	--Store the sign of both
	Asig:=A(TO_WIDTH);
	Bsig:=B(TO_WIDTH);
	--Store the exponent of both
	Aexp:=A(TO_WIDTH-1 downto TO_WIDTH-EXP_WIDTH-1);
	Bexp:=B(TO_WIDTH-1 downto TO_WIDTH-EXP_WIDTH-1);
	--Store the mantisa of both
	
	
	--Aman:= std_logic_vector(unsigned('0'));
	--Bman:= std_logic_vector(unsigned('0'));
	Aman:= (others => '0');
	Bman:= (others => '0');
	
	Bman:= Bman(BUS_OPE-1 downto 0) & '1';
	
	
	Aman:= Aman(BUS_OPE-OP_WIDTH-2 downto 0) & '1' & A(OP_WIDTH downto 0);
	

	--Aman:= Aman(BUS_OPE-1 downto 0) & '1';
	--Aman:= Aman(BUS_OPE-OP_WIDTH downto 0) & A(OP_WIDTH downto 0)

	--Add the one o complete the operands
	ope1 <= Aman;
	ope2 <= Bman;

	
	--to test if we fill well of the variables
	finalExpon1 <= Aexp;
	finalExpon2 <= Bexp;
	finalSign <= Asig and Bsig;

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
			finalExpon1: out std_logic_vector (EXP_WIDTH downto 0); 
			finalExpon2: out std_logic_vector (EXP_WIDTH downto 0);
			finalSign: out std_logic; 
			clk: in std_logic  --! clock
			);
	end component;

	signal		A1_t: std_logic_vector (7 downto 0):="00111110";
	signal		A2_t: std_logic_vector (7 downto 0):="10000000"; 
	signal		A3_t: std_logic_vector (7 downto 0):="00000110"; 
	signal		A4_t: std_logic_vector (7 downto 0):="00011000";  

	signal		B1_t: std_logic_vector (7 downto 0):="01000010";
	signal		B2_t: std_logic_vector (7 downto 0):="11001000";
	signal		B3_t: std_logic_vector (7 downto 0):="00000000";
	signal		B4_t: std_logic_vector (7 downto 0):="00000000";

	signal		ope1_t: std_logic_vector (BUS_OPE downto 0); 
	signal		ope2_t: std_logic_vector (BUS_OPE downto 0); 
	signal		finalExpon1_t: std_logic_vector (EXP_WIDTH downto 0); 
	signal		finalExpon2_t: std_logic_vector (EXP_WIDTH downto 0);
	signal		finalSign_t: std_logic; 
	signal		clk_t: std_logic:='0';  

begin
	
	clk_t <= not clk_t after 100 ns; 

	
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
	finalExpon1 => finalExpon1_t, 
	finalExpon2 => finalExpon2_t,
	finalSign => finalSign_t,
	
	clk => clk_t
	);

end PreSuma_test_arq;

--END