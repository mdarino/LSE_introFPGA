----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:57:15 01/21/2016 
-- Design Name: 
-- Module Name:    Test1Suma - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
--LIBRARY
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use WORK.floatPointConst.ALL;



entity Test1Suma is
	port(
			operand1, operand2: in std_logic_vector (BUS_OPE downto 0);
			result: out std_logic_vector (BUS_OPE downto 0);
			ca: out std_logic;
			clk: in std_logic
		);
end Test1Suma;



architecture Behavioral of Test1Suma is

begin
	process(clk)
		--Variables
		--Is one bit large to store the carry
		variable add_result:     std_logic_vector(BUS_OPE+1 downto 0);
		--oparand A
		variable OpeA: std_logic_vector(BUS_OPE+1 downto 0);
		variable OpeB: std_logic_vector(BUS_OPE+1 downto 0);
	begin
		
		OpeA:='0' & operand1;
		OpeB:='0' & operand2;
		--Add two number and the convert again to std logic	
		add_result:=std_logic_vector(unsigned(OpeA) + unsigned(OpeB));
		result <= add_result(BUS_OPE downto 0);
		ca <= add_result(BUS_OPE+1);
	end process; 

end Behavioral;




-----------------------------------
-- TEST BENCH 
-----------------------------------

--LIBRARY:
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


use WORK.floatPointConst.ALL;

--ENTITY:
entity Test1Suma_test is

end Test1Suma_test;

--ARCHITECTURE:
	--Simulate the clock and the reset

architecture Test1Suma_test_arq of Test1Suma_test is
	component Test1Suma is
		port(  	
			operand1, operand2: in std_logic_vector (BUS_OPE downto 0);
			result: out std_logic_vector (BUS_OPE downto 0);
			ca: out std_logic;
			clk: in std_logic

			);
	end component;


	signal operand1_t: std_logic_vector(BUS_OPE downto 0):="1000100";
	signal operand2_t: std_logic_vector(BUS_OPE downto 0):="1011100";
	signal result_t: std_logic_vector(BUS_OPE downto 0);
	signal ca_t: std_logic:='0';
	signal clk_t: std_logic:='0';

begin
	
	clk_t <= not clk_t after 100 ns; 

	
	DUT: Test1Suma port map(
		operand1 => operand1_t,
		operand2 => operand2_t,
		result => result_t,
		ca => ca_t,
		clk => clk_t
	);

end Test1Suma_test_arq;

--END

