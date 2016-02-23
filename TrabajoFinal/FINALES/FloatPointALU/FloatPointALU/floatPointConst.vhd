--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;


package floatPointConst is
	-- Define the width of the exponent
	constant EXP_WIDTH : Integer;
	-- Define the total width of the float point operand
	constant OP_WIDTH : Integer;
	-- Define the total sig+exp+man
	constant TO_WIDTH : Integer;	
	-- Define the total width to add and mul  the operant
	constant BUS_OPE: Integer;
	-- Define how much it will multiply
	constant BUS_MUL: Integer;

end floatPointConst;

package body floatPointConst is
	-- Define the width of the exponent
	-- Remember subtract one - if you want 8 bits, put 7
	-- Because it is define from 0 to 7 ->8 bits
	constant EXP_WIDTH : Integer := 7;
	
	-- Define the total width of the float point operand
	-- Remember subtract one
	constant OP_WIDTH : Integer := 22;

	-- Define the total sig+exp+man
	constant TO_WIDTH : Integer :=EXP_WIDTH+OP_WIDTH+2;
	
	-- Define how much it will multiply
	-- For example 2, for 32 bits x 2= 64 
	-- 64 - 23 = 41
	-- You can shift the number 41 times and you do not lose information
	constant BUS_MUL: Integer :=3;	

	--NOT CHANGE THIS VALUE - it is updated automatic
	constant BUS_OPE: Integer :=BUS_MUL*OP_WIDTH;

end floatPointConst;


--package floatPointConst is

-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
-- constant <constant_name>		: time := <time_unit> ns;
-- constant <constant_name>		: integer := <value;
--
-- Declare functions and procedure
--
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--

--end floatPointConst;

--package body floatPointConst is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
--end floatPointConst;


