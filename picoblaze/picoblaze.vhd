----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:19:57 01/26/2016 
-- Design Name: 
-- Module Name:    picoblaze - Behavioral 
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity picoblaze is
    Port ( switch : in  STD_LOGIC_VECTOR (0 downto 7);
           leds : out  STD_LOGIC_VECTOR (0 downto 7);
           clk : in  STD_LOGIC);
end picoblaze;

architecture Behavioral of picoblaze is

begin


end Behavioral;

