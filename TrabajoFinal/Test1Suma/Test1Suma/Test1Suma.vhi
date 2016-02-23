
-- VHDL Instantiation Created from source file Test1Suma.vhd -- 19:24:04 01/21/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Test1Suma
	PORT(
		operand1 : IN std_logic_vector(31 downto 0);
		operand2 : IN std_logic_vector(31 downto 0);
		clk : IN std_logic;          
		result : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_Test1Suma: Test1Suma PORT MAP(
		operand1 => ,
		operand2 => ,
		result => ,
		clk => 
	);


