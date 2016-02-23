--------------------------------------------------------------------------------
-- Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.49d
--  \   \         Application: netgen
--  /   /         Filename: Test1Suma_synthesis.vhd
-- /___/   /\     Timestamp: Thu Jan 21 19:28:28 2016
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm Test1Suma -w -dir netgen/synthesis -ofmt vhdl -sim Test1Suma.ngc Test1Suma_synthesis.vhd 
-- Device	: xc3s500e-4-fg320
-- Input file	: Test1Suma.ngc
-- Output file	: C:\Cursos\IntroFpga\TrabajoFinal\Test1Suma\Test1Suma\netgen\synthesis\Test1Suma_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: Test1Suma
-- Xilinx	: C:\Xilinx\14.4\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity Test1Suma is
  port (
    clk : in STD_LOGIC := 'X'; 
    result : out STD_LOGIC_VECTOR ( 31 downto 0 ); 
    operand1 : in STD_LOGIC_VECTOR ( 31 downto 0 ); 
    operand2 : in STD_LOGIC_VECTOR ( 31 downto 0 ) 
  );
end Test1Suma;

architecture Structure of Test1Suma is
  signal N0 : STD_LOGIC; 
  signal operand1_0_IBUF_96 : STD_LOGIC; 
  signal operand1_10_IBUF_97 : STD_LOGIC; 
  signal operand1_11_IBUF_98 : STD_LOGIC; 
  signal operand1_12_IBUF_99 : STD_LOGIC; 
  signal operand1_13_IBUF_100 : STD_LOGIC; 
  signal operand1_14_IBUF_101 : STD_LOGIC; 
  signal operand1_15_IBUF_102 : STD_LOGIC; 
  signal operand1_16_IBUF_103 : STD_LOGIC; 
  signal operand1_17_IBUF_104 : STD_LOGIC; 
  signal operand1_18_IBUF_105 : STD_LOGIC; 
  signal operand1_19_IBUF_106 : STD_LOGIC; 
  signal operand1_1_IBUF_107 : STD_LOGIC; 
  signal operand1_20_IBUF_108 : STD_LOGIC; 
  signal operand1_21_IBUF_109 : STD_LOGIC; 
  signal operand1_22_IBUF_110 : STD_LOGIC; 
  signal operand1_23_IBUF_111 : STD_LOGIC; 
  signal operand1_24_IBUF_112 : STD_LOGIC; 
  signal operand1_25_IBUF_113 : STD_LOGIC; 
  signal operand1_26_IBUF_114 : STD_LOGIC; 
  signal operand1_27_IBUF_115 : STD_LOGIC; 
  signal operand1_28_IBUF_116 : STD_LOGIC; 
  signal operand1_29_IBUF_117 : STD_LOGIC; 
  signal operand1_2_IBUF_118 : STD_LOGIC; 
  signal operand1_30_IBUF_119 : STD_LOGIC; 
  signal operand1_31_IBUF_120 : STD_LOGIC; 
  signal operand1_3_IBUF_121 : STD_LOGIC; 
  signal operand1_4_IBUF_122 : STD_LOGIC; 
  signal operand1_5_IBUF_123 : STD_LOGIC; 
  signal operand1_6_IBUF_124 : STD_LOGIC; 
  signal operand1_7_IBUF_125 : STD_LOGIC; 
  signal operand1_8_IBUF_126 : STD_LOGIC; 
  signal operand1_9_IBUF_127 : STD_LOGIC; 
  signal operand2_0_IBUF_160 : STD_LOGIC; 
  signal operand2_10_IBUF_161 : STD_LOGIC; 
  signal operand2_11_IBUF_162 : STD_LOGIC; 
  signal operand2_12_IBUF_163 : STD_LOGIC; 
  signal operand2_13_IBUF_164 : STD_LOGIC; 
  signal operand2_14_IBUF_165 : STD_LOGIC; 
  signal operand2_15_IBUF_166 : STD_LOGIC; 
  signal operand2_16_IBUF_167 : STD_LOGIC; 
  signal operand2_17_IBUF_168 : STD_LOGIC; 
  signal operand2_18_IBUF_169 : STD_LOGIC; 
  signal operand2_19_IBUF_170 : STD_LOGIC; 
  signal operand2_1_IBUF_171 : STD_LOGIC; 
  signal operand2_20_IBUF_172 : STD_LOGIC; 
  signal operand2_21_IBUF_173 : STD_LOGIC; 
  signal operand2_22_IBUF_174 : STD_LOGIC; 
  signal operand2_23_IBUF_175 : STD_LOGIC; 
  signal operand2_24_IBUF_176 : STD_LOGIC; 
  signal operand2_25_IBUF_177 : STD_LOGIC; 
  signal operand2_26_IBUF_178 : STD_LOGIC; 
  signal operand2_27_IBUF_179 : STD_LOGIC; 
  signal operand2_28_IBUF_180 : STD_LOGIC; 
  signal operand2_29_IBUF_181 : STD_LOGIC; 
  signal operand2_2_IBUF_182 : STD_LOGIC; 
  signal operand2_30_IBUF_183 : STD_LOGIC; 
  signal operand2_31_IBUF_184 : STD_LOGIC; 
  signal operand2_3_IBUF_185 : STD_LOGIC; 
  signal operand2_4_IBUF_186 : STD_LOGIC; 
  signal operand2_5_IBUF_187 : STD_LOGIC; 
  signal operand2_6_IBUF_188 : STD_LOGIC; 
  signal operand2_7_IBUF_189 : STD_LOGIC; 
  signal operand2_8_IBUF_190 : STD_LOGIC; 
  signal operand2_9_IBUF_191 : STD_LOGIC; 
  signal result_0_OBUF_224 : STD_LOGIC; 
  signal result_10_OBUF_225 : STD_LOGIC; 
  signal result_11_OBUF_226 : STD_LOGIC; 
  signal result_12_OBUF_227 : STD_LOGIC; 
  signal result_13_OBUF_228 : STD_LOGIC; 
  signal result_14_OBUF_229 : STD_LOGIC; 
  signal result_15_OBUF_230 : STD_LOGIC; 
  signal result_16_OBUF_231 : STD_LOGIC; 
  signal result_17_OBUF_232 : STD_LOGIC; 
  signal result_18_OBUF_233 : STD_LOGIC; 
  signal result_19_OBUF_234 : STD_LOGIC; 
  signal result_1_OBUF_235 : STD_LOGIC; 
  signal result_20_OBUF_236 : STD_LOGIC; 
  signal result_21_OBUF_237 : STD_LOGIC; 
  signal result_22_OBUF_238 : STD_LOGIC; 
  signal result_23_OBUF_239 : STD_LOGIC; 
  signal result_24_OBUF_240 : STD_LOGIC; 
  signal result_25_OBUF_241 : STD_LOGIC; 
  signal result_26_OBUF_242 : STD_LOGIC; 
  signal result_27_OBUF_243 : STD_LOGIC; 
  signal result_28_OBUF_244 : STD_LOGIC; 
  signal result_29_OBUF_245 : STD_LOGIC; 
  signal result_2_OBUF_246 : STD_LOGIC; 
  signal result_30_OBUF_247 : STD_LOGIC; 
  signal result_31_OBUF_248 : STD_LOGIC; 
  signal result_3_OBUF_249 : STD_LOGIC; 
  signal result_4_OBUF_250 : STD_LOGIC; 
  signal result_5_OBUF_251 : STD_LOGIC; 
  signal result_6_OBUF_252 : STD_LOGIC; 
  signal result_7_OBUF_253 : STD_LOGIC; 
  signal result_8_OBUF_254 : STD_LOGIC; 
  signal result_9_OBUF_255 : STD_LOGIC; 
  signal Madd_result_cy : STD_LOGIC_VECTOR ( 30 downto 0 ); 
  signal Madd_result_lut : STD_LOGIC_VECTOR ( 31 downto 0 ); 
begin
  XST_GND : GND
    port map (
      G => N0
    );
  Madd_result_lut_0_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_0_IBUF_96,
      I1 => operand2_0_IBUF_160,
      O => Madd_result_lut(0)
    );
  Madd_result_cy_0_Q : MUXCY
    port map (
      CI => N0,
      DI => operand1_0_IBUF_96,
      S => Madd_result_lut(0),
      O => Madd_result_cy(0)
    );
  Madd_result_xor_0_Q : XORCY
    port map (
      CI => N0,
      LI => Madd_result_lut(0),
      O => result_0_OBUF_224
    );
  Madd_result_lut_1_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_1_IBUF_107,
      I1 => operand2_1_IBUF_171,
      O => Madd_result_lut(1)
    );
  Madd_result_cy_1_Q : MUXCY
    port map (
      CI => Madd_result_cy(0),
      DI => operand1_1_IBUF_107,
      S => Madd_result_lut(1),
      O => Madd_result_cy(1)
    );
  Madd_result_xor_1_Q : XORCY
    port map (
      CI => Madd_result_cy(0),
      LI => Madd_result_lut(1),
      O => result_1_OBUF_235
    );
  Madd_result_lut_2_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_2_IBUF_118,
      I1 => operand2_2_IBUF_182,
      O => Madd_result_lut(2)
    );
  Madd_result_cy_2_Q : MUXCY
    port map (
      CI => Madd_result_cy(1),
      DI => operand1_2_IBUF_118,
      S => Madd_result_lut(2),
      O => Madd_result_cy(2)
    );
  Madd_result_xor_2_Q : XORCY
    port map (
      CI => Madd_result_cy(1),
      LI => Madd_result_lut(2),
      O => result_2_OBUF_246
    );
  Madd_result_lut_3_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_3_IBUF_121,
      I1 => operand2_3_IBUF_185,
      O => Madd_result_lut(3)
    );
  Madd_result_cy_3_Q : MUXCY
    port map (
      CI => Madd_result_cy(2),
      DI => operand1_3_IBUF_121,
      S => Madd_result_lut(3),
      O => Madd_result_cy(3)
    );
  Madd_result_xor_3_Q : XORCY
    port map (
      CI => Madd_result_cy(2),
      LI => Madd_result_lut(3),
      O => result_3_OBUF_249
    );
  Madd_result_lut_4_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_4_IBUF_122,
      I1 => operand2_4_IBUF_186,
      O => Madd_result_lut(4)
    );
  Madd_result_cy_4_Q : MUXCY
    port map (
      CI => Madd_result_cy(3),
      DI => operand1_4_IBUF_122,
      S => Madd_result_lut(4),
      O => Madd_result_cy(4)
    );
  Madd_result_xor_4_Q : XORCY
    port map (
      CI => Madd_result_cy(3),
      LI => Madd_result_lut(4),
      O => result_4_OBUF_250
    );
  Madd_result_lut_5_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_5_IBUF_123,
      I1 => operand2_5_IBUF_187,
      O => Madd_result_lut(5)
    );
  Madd_result_cy_5_Q : MUXCY
    port map (
      CI => Madd_result_cy(4),
      DI => operand1_5_IBUF_123,
      S => Madd_result_lut(5),
      O => Madd_result_cy(5)
    );
  Madd_result_xor_5_Q : XORCY
    port map (
      CI => Madd_result_cy(4),
      LI => Madd_result_lut(5),
      O => result_5_OBUF_251
    );
  Madd_result_lut_6_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_6_IBUF_124,
      I1 => operand2_6_IBUF_188,
      O => Madd_result_lut(6)
    );
  Madd_result_cy_6_Q : MUXCY
    port map (
      CI => Madd_result_cy(5),
      DI => operand1_6_IBUF_124,
      S => Madd_result_lut(6),
      O => Madd_result_cy(6)
    );
  Madd_result_xor_6_Q : XORCY
    port map (
      CI => Madd_result_cy(5),
      LI => Madd_result_lut(6),
      O => result_6_OBUF_252
    );
  Madd_result_lut_7_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_7_IBUF_125,
      I1 => operand2_7_IBUF_189,
      O => Madd_result_lut(7)
    );
  Madd_result_cy_7_Q : MUXCY
    port map (
      CI => Madd_result_cy(6),
      DI => operand1_7_IBUF_125,
      S => Madd_result_lut(7),
      O => Madd_result_cy(7)
    );
  Madd_result_xor_7_Q : XORCY
    port map (
      CI => Madd_result_cy(6),
      LI => Madd_result_lut(7),
      O => result_7_OBUF_253
    );
  Madd_result_lut_8_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_8_IBUF_126,
      I1 => operand2_8_IBUF_190,
      O => Madd_result_lut(8)
    );
  Madd_result_cy_8_Q : MUXCY
    port map (
      CI => Madd_result_cy(7),
      DI => operand1_8_IBUF_126,
      S => Madd_result_lut(8),
      O => Madd_result_cy(8)
    );
  Madd_result_xor_8_Q : XORCY
    port map (
      CI => Madd_result_cy(7),
      LI => Madd_result_lut(8),
      O => result_8_OBUF_254
    );
  Madd_result_lut_9_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_9_IBUF_127,
      I1 => operand2_9_IBUF_191,
      O => Madd_result_lut(9)
    );
  Madd_result_cy_9_Q : MUXCY
    port map (
      CI => Madd_result_cy(8),
      DI => operand1_9_IBUF_127,
      S => Madd_result_lut(9),
      O => Madd_result_cy(9)
    );
  Madd_result_xor_9_Q : XORCY
    port map (
      CI => Madd_result_cy(8),
      LI => Madd_result_lut(9),
      O => result_9_OBUF_255
    );
  Madd_result_lut_10_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_10_IBUF_97,
      I1 => operand2_10_IBUF_161,
      O => Madd_result_lut(10)
    );
  Madd_result_cy_10_Q : MUXCY
    port map (
      CI => Madd_result_cy(9),
      DI => operand1_10_IBUF_97,
      S => Madd_result_lut(10),
      O => Madd_result_cy(10)
    );
  Madd_result_xor_10_Q : XORCY
    port map (
      CI => Madd_result_cy(9),
      LI => Madd_result_lut(10),
      O => result_10_OBUF_225
    );
  Madd_result_lut_11_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_11_IBUF_98,
      I1 => operand2_11_IBUF_162,
      O => Madd_result_lut(11)
    );
  Madd_result_cy_11_Q : MUXCY
    port map (
      CI => Madd_result_cy(10),
      DI => operand1_11_IBUF_98,
      S => Madd_result_lut(11),
      O => Madd_result_cy(11)
    );
  Madd_result_xor_11_Q : XORCY
    port map (
      CI => Madd_result_cy(10),
      LI => Madd_result_lut(11),
      O => result_11_OBUF_226
    );
  Madd_result_lut_12_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_12_IBUF_99,
      I1 => operand2_12_IBUF_163,
      O => Madd_result_lut(12)
    );
  Madd_result_cy_12_Q : MUXCY
    port map (
      CI => Madd_result_cy(11),
      DI => operand1_12_IBUF_99,
      S => Madd_result_lut(12),
      O => Madd_result_cy(12)
    );
  Madd_result_xor_12_Q : XORCY
    port map (
      CI => Madd_result_cy(11),
      LI => Madd_result_lut(12),
      O => result_12_OBUF_227
    );
  Madd_result_lut_13_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_13_IBUF_100,
      I1 => operand2_13_IBUF_164,
      O => Madd_result_lut(13)
    );
  Madd_result_cy_13_Q : MUXCY
    port map (
      CI => Madd_result_cy(12),
      DI => operand1_13_IBUF_100,
      S => Madd_result_lut(13),
      O => Madd_result_cy(13)
    );
  Madd_result_xor_13_Q : XORCY
    port map (
      CI => Madd_result_cy(12),
      LI => Madd_result_lut(13),
      O => result_13_OBUF_228
    );
  Madd_result_lut_14_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_14_IBUF_101,
      I1 => operand2_14_IBUF_165,
      O => Madd_result_lut(14)
    );
  Madd_result_cy_14_Q : MUXCY
    port map (
      CI => Madd_result_cy(13),
      DI => operand1_14_IBUF_101,
      S => Madd_result_lut(14),
      O => Madd_result_cy(14)
    );
  Madd_result_xor_14_Q : XORCY
    port map (
      CI => Madd_result_cy(13),
      LI => Madd_result_lut(14),
      O => result_14_OBUF_229
    );
  Madd_result_lut_15_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_15_IBUF_102,
      I1 => operand2_15_IBUF_166,
      O => Madd_result_lut(15)
    );
  Madd_result_cy_15_Q : MUXCY
    port map (
      CI => Madd_result_cy(14),
      DI => operand1_15_IBUF_102,
      S => Madd_result_lut(15),
      O => Madd_result_cy(15)
    );
  Madd_result_xor_15_Q : XORCY
    port map (
      CI => Madd_result_cy(14),
      LI => Madd_result_lut(15),
      O => result_15_OBUF_230
    );
  Madd_result_lut_16_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_16_IBUF_103,
      I1 => operand2_16_IBUF_167,
      O => Madd_result_lut(16)
    );
  Madd_result_cy_16_Q : MUXCY
    port map (
      CI => Madd_result_cy(15),
      DI => operand1_16_IBUF_103,
      S => Madd_result_lut(16),
      O => Madd_result_cy(16)
    );
  Madd_result_xor_16_Q : XORCY
    port map (
      CI => Madd_result_cy(15),
      LI => Madd_result_lut(16),
      O => result_16_OBUF_231
    );
  Madd_result_lut_17_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_17_IBUF_104,
      I1 => operand2_17_IBUF_168,
      O => Madd_result_lut(17)
    );
  Madd_result_cy_17_Q : MUXCY
    port map (
      CI => Madd_result_cy(16),
      DI => operand1_17_IBUF_104,
      S => Madd_result_lut(17),
      O => Madd_result_cy(17)
    );
  Madd_result_xor_17_Q : XORCY
    port map (
      CI => Madd_result_cy(16),
      LI => Madd_result_lut(17),
      O => result_17_OBUF_232
    );
  Madd_result_lut_18_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_18_IBUF_105,
      I1 => operand2_18_IBUF_169,
      O => Madd_result_lut(18)
    );
  Madd_result_cy_18_Q : MUXCY
    port map (
      CI => Madd_result_cy(17),
      DI => operand1_18_IBUF_105,
      S => Madd_result_lut(18),
      O => Madd_result_cy(18)
    );
  Madd_result_xor_18_Q : XORCY
    port map (
      CI => Madd_result_cy(17),
      LI => Madd_result_lut(18),
      O => result_18_OBUF_233
    );
  Madd_result_lut_19_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_19_IBUF_106,
      I1 => operand2_19_IBUF_170,
      O => Madd_result_lut(19)
    );
  Madd_result_cy_19_Q : MUXCY
    port map (
      CI => Madd_result_cy(18),
      DI => operand1_19_IBUF_106,
      S => Madd_result_lut(19),
      O => Madd_result_cy(19)
    );
  Madd_result_xor_19_Q : XORCY
    port map (
      CI => Madd_result_cy(18),
      LI => Madd_result_lut(19),
      O => result_19_OBUF_234
    );
  Madd_result_lut_20_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_20_IBUF_108,
      I1 => operand2_20_IBUF_172,
      O => Madd_result_lut(20)
    );
  Madd_result_cy_20_Q : MUXCY
    port map (
      CI => Madd_result_cy(19),
      DI => operand1_20_IBUF_108,
      S => Madd_result_lut(20),
      O => Madd_result_cy(20)
    );
  Madd_result_xor_20_Q : XORCY
    port map (
      CI => Madd_result_cy(19),
      LI => Madd_result_lut(20),
      O => result_20_OBUF_236
    );
  Madd_result_lut_21_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_21_IBUF_109,
      I1 => operand2_21_IBUF_173,
      O => Madd_result_lut(21)
    );
  Madd_result_cy_21_Q : MUXCY
    port map (
      CI => Madd_result_cy(20),
      DI => operand1_21_IBUF_109,
      S => Madd_result_lut(21),
      O => Madd_result_cy(21)
    );
  Madd_result_xor_21_Q : XORCY
    port map (
      CI => Madd_result_cy(20),
      LI => Madd_result_lut(21),
      O => result_21_OBUF_237
    );
  Madd_result_lut_22_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_22_IBUF_110,
      I1 => operand2_22_IBUF_174,
      O => Madd_result_lut(22)
    );
  Madd_result_cy_22_Q : MUXCY
    port map (
      CI => Madd_result_cy(21),
      DI => operand1_22_IBUF_110,
      S => Madd_result_lut(22),
      O => Madd_result_cy(22)
    );
  Madd_result_xor_22_Q : XORCY
    port map (
      CI => Madd_result_cy(21),
      LI => Madd_result_lut(22),
      O => result_22_OBUF_238
    );
  Madd_result_lut_23_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_23_IBUF_111,
      I1 => operand2_23_IBUF_175,
      O => Madd_result_lut(23)
    );
  Madd_result_cy_23_Q : MUXCY
    port map (
      CI => Madd_result_cy(22),
      DI => operand1_23_IBUF_111,
      S => Madd_result_lut(23),
      O => Madd_result_cy(23)
    );
  Madd_result_xor_23_Q : XORCY
    port map (
      CI => Madd_result_cy(22),
      LI => Madd_result_lut(23),
      O => result_23_OBUF_239
    );
  Madd_result_lut_24_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_24_IBUF_112,
      I1 => operand2_24_IBUF_176,
      O => Madd_result_lut(24)
    );
  Madd_result_cy_24_Q : MUXCY
    port map (
      CI => Madd_result_cy(23),
      DI => operand1_24_IBUF_112,
      S => Madd_result_lut(24),
      O => Madd_result_cy(24)
    );
  Madd_result_xor_24_Q : XORCY
    port map (
      CI => Madd_result_cy(23),
      LI => Madd_result_lut(24),
      O => result_24_OBUF_240
    );
  Madd_result_lut_25_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_25_IBUF_113,
      I1 => operand2_25_IBUF_177,
      O => Madd_result_lut(25)
    );
  Madd_result_cy_25_Q : MUXCY
    port map (
      CI => Madd_result_cy(24),
      DI => operand1_25_IBUF_113,
      S => Madd_result_lut(25),
      O => Madd_result_cy(25)
    );
  Madd_result_xor_25_Q : XORCY
    port map (
      CI => Madd_result_cy(24),
      LI => Madd_result_lut(25),
      O => result_25_OBUF_241
    );
  Madd_result_lut_26_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_26_IBUF_114,
      I1 => operand2_26_IBUF_178,
      O => Madd_result_lut(26)
    );
  Madd_result_cy_26_Q : MUXCY
    port map (
      CI => Madd_result_cy(25),
      DI => operand1_26_IBUF_114,
      S => Madd_result_lut(26),
      O => Madd_result_cy(26)
    );
  Madd_result_xor_26_Q : XORCY
    port map (
      CI => Madd_result_cy(25),
      LI => Madd_result_lut(26),
      O => result_26_OBUF_242
    );
  Madd_result_lut_27_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_27_IBUF_115,
      I1 => operand2_27_IBUF_179,
      O => Madd_result_lut(27)
    );
  Madd_result_cy_27_Q : MUXCY
    port map (
      CI => Madd_result_cy(26),
      DI => operand1_27_IBUF_115,
      S => Madd_result_lut(27),
      O => Madd_result_cy(27)
    );
  Madd_result_xor_27_Q : XORCY
    port map (
      CI => Madd_result_cy(26),
      LI => Madd_result_lut(27),
      O => result_27_OBUF_243
    );
  Madd_result_lut_28_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_28_IBUF_116,
      I1 => operand2_28_IBUF_180,
      O => Madd_result_lut(28)
    );
  Madd_result_cy_28_Q : MUXCY
    port map (
      CI => Madd_result_cy(27),
      DI => operand1_28_IBUF_116,
      S => Madd_result_lut(28),
      O => Madd_result_cy(28)
    );
  Madd_result_xor_28_Q : XORCY
    port map (
      CI => Madd_result_cy(27),
      LI => Madd_result_lut(28),
      O => result_28_OBUF_244
    );
  Madd_result_lut_29_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_29_IBUF_117,
      I1 => operand2_29_IBUF_181,
      O => Madd_result_lut(29)
    );
  Madd_result_cy_29_Q : MUXCY
    port map (
      CI => Madd_result_cy(28),
      DI => operand1_29_IBUF_117,
      S => Madd_result_lut(29),
      O => Madd_result_cy(29)
    );
  Madd_result_xor_29_Q : XORCY
    port map (
      CI => Madd_result_cy(28),
      LI => Madd_result_lut(29),
      O => result_29_OBUF_245
    );
  Madd_result_lut_30_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_30_IBUF_119,
      I1 => operand2_30_IBUF_183,
      O => Madd_result_lut(30)
    );
  Madd_result_cy_30_Q : MUXCY
    port map (
      CI => Madd_result_cy(29),
      DI => operand1_30_IBUF_119,
      S => Madd_result_lut(30),
      O => Madd_result_cy(30)
    );
  Madd_result_xor_30_Q : XORCY
    port map (
      CI => Madd_result_cy(29),
      LI => Madd_result_lut(30),
      O => result_30_OBUF_247
    );
  Madd_result_lut_31_Q : LUT2
    generic map(
      INIT => X"6"
    )
    port map (
      I0 => operand1_31_IBUF_120,
      I1 => operand2_31_IBUF_184,
      O => Madd_result_lut(31)
    );
  Madd_result_xor_31_Q : XORCY
    port map (
      CI => Madd_result_cy(30),
      LI => Madd_result_lut(31),
      O => result_31_OBUF_248
    );
  operand1_31_IBUF : IBUF
    port map (
      I => operand1(31),
      O => operand1_31_IBUF_120
    );
  operand1_30_IBUF : IBUF
    port map (
      I => operand1(30),
      O => operand1_30_IBUF_119
    );
  operand1_29_IBUF : IBUF
    port map (
      I => operand1(29),
      O => operand1_29_IBUF_117
    );
  operand1_28_IBUF : IBUF
    port map (
      I => operand1(28),
      O => operand1_28_IBUF_116
    );
  operand1_27_IBUF : IBUF
    port map (
      I => operand1(27),
      O => operand1_27_IBUF_115
    );
  operand1_26_IBUF : IBUF
    port map (
      I => operand1(26),
      O => operand1_26_IBUF_114
    );
  operand1_25_IBUF : IBUF
    port map (
      I => operand1(25),
      O => operand1_25_IBUF_113
    );
  operand1_24_IBUF : IBUF
    port map (
      I => operand1(24),
      O => operand1_24_IBUF_112
    );
  operand1_23_IBUF : IBUF
    port map (
      I => operand1(23),
      O => operand1_23_IBUF_111
    );
  operand1_22_IBUF : IBUF
    port map (
      I => operand1(22),
      O => operand1_22_IBUF_110
    );
  operand1_21_IBUF : IBUF
    port map (
      I => operand1(21),
      O => operand1_21_IBUF_109
    );
  operand1_20_IBUF : IBUF
    port map (
      I => operand1(20),
      O => operand1_20_IBUF_108
    );
  operand1_19_IBUF : IBUF
    port map (
      I => operand1(19),
      O => operand1_19_IBUF_106
    );
  operand1_18_IBUF : IBUF
    port map (
      I => operand1(18),
      O => operand1_18_IBUF_105
    );
  operand1_17_IBUF : IBUF
    port map (
      I => operand1(17),
      O => operand1_17_IBUF_104
    );
  operand1_16_IBUF : IBUF
    port map (
      I => operand1(16),
      O => operand1_16_IBUF_103
    );
  operand1_15_IBUF : IBUF
    port map (
      I => operand1(15),
      O => operand1_15_IBUF_102
    );
  operand1_14_IBUF : IBUF
    port map (
      I => operand1(14),
      O => operand1_14_IBUF_101
    );
  operand1_13_IBUF : IBUF
    port map (
      I => operand1(13),
      O => operand1_13_IBUF_100
    );
  operand1_12_IBUF : IBUF
    port map (
      I => operand1(12),
      O => operand1_12_IBUF_99
    );
  operand1_11_IBUF : IBUF
    port map (
      I => operand1(11),
      O => operand1_11_IBUF_98
    );
  operand1_10_IBUF : IBUF
    port map (
      I => operand1(10),
      O => operand1_10_IBUF_97
    );
  operand1_9_IBUF : IBUF
    port map (
      I => operand1(9),
      O => operand1_9_IBUF_127
    );
  operand1_8_IBUF : IBUF
    port map (
      I => operand1(8),
      O => operand1_8_IBUF_126
    );
  operand1_7_IBUF : IBUF
    port map (
      I => operand1(7),
      O => operand1_7_IBUF_125
    );
  operand1_6_IBUF : IBUF
    port map (
      I => operand1(6),
      O => operand1_6_IBUF_124
    );
  operand1_5_IBUF : IBUF
    port map (
      I => operand1(5),
      O => operand1_5_IBUF_123
    );
  operand1_4_IBUF : IBUF
    port map (
      I => operand1(4),
      O => operand1_4_IBUF_122
    );
  operand1_3_IBUF : IBUF
    port map (
      I => operand1(3),
      O => operand1_3_IBUF_121
    );
  operand1_2_IBUF : IBUF
    port map (
      I => operand1(2),
      O => operand1_2_IBUF_118
    );
  operand1_1_IBUF : IBUF
    port map (
      I => operand1(1),
      O => operand1_1_IBUF_107
    );
  operand1_0_IBUF : IBUF
    port map (
      I => operand1(0),
      O => operand1_0_IBUF_96
    );
  operand2_31_IBUF : IBUF
    port map (
      I => operand2(31),
      O => operand2_31_IBUF_184
    );
  operand2_30_IBUF : IBUF
    port map (
      I => operand2(30),
      O => operand2_30_IBUF_183
    );
  operand2_29_IBUF : IBUF
    port map (
      I => operand2(29),
      O => operand2_29_IBUF_181
    );
  operand2_28_IBUF : IBUF
    port map (
      I => operand2(28),
      O => operand2_28_IBUF_180
    );
  operand2_27_IBUF : IBUF
    port map (
      I => operand2(27),
      O => operand2_27_IBUF_179
    );
  operand2_26_IBUF : IBUF
    port map (
      I => operand2(26),
      O => operand2_26_IBUF_178
    );
  operand2_25_IBUF : IBUF
    port map (
      I => operand2(25),
      O => operand2_25_IBUF_177
    );
  operand2_24_IBUF : IBUF
    port map (
      I => operand2(24),
      O => operand2_24_IBUF_176
    );
  operand2_23_IBUF : IBUF
    port map (
      I => operand2(23),
      O => operand2_23_IBUF_175
    );
  operand2_22_IBUF : IBUF
    port map (
      I => operand2(22),
      O => operand2_22_IBUF_174
    );
  operand2_21_IBUF : IBUF
    port map (
      I => operand2(21),
      O => operand2_21_IBUF_173
    );
  operand2_20_IBUF : IBUF
    port map (
      I => operand2(20),
      O => operand2_20_IBUF_172
    );
  operand2_19_IBUF : IBUF
    port map (
      I => operand2(19),
      O => operand2_19_IBUF_170
    );
  operand2_18_IBUF : IBUF
    port map (
      I => operand2(18),
      O => operand2_18_IBUF_169
    );
  operand2_17_IBUF : IBUF
    port map (
      I => operand2(17),
      O => operand2_17_IBUF_168
    );
  operand2_16_IBUF : IBUF
    port map (
      I => operand2(16),
      O => operand2_16_IBUF_167
    );
  operand2_15_IBUF : IBUF
    port map (
      I => operand2(15),
      O => operand2_15_IBUF_166
    );
  operand2_14_IBUF : IBUF
    port map (
      I => operand2(14),
      O => operand2_14_IBUF_165
    );
  operand2_13_IBUF : IBUF
    port map (
      I => operand2(13),
      O => operand2_13_IBUF_164
    );
  operand2_12_IBUF : IBUF
    port map (
      I => operand2(12),
      O => operand2_12_IBUF_163
    );
  operand2_11_IBUF : IBUF
    port map (
      I => operand2(11),
      O => operand2_11_IBUF_162
    );
  operand2_10_IBUF : IBUF
    port map (
      I => operand2(10),
      O => operand2_10_IBUF_161
    );
  operand2_9_IBUF : IBUF
    port map (
      I => operand2(9),
      O => operand2_9_IBUF_191
    );
  operand2_8_IBUF : IBUF
    port map (
      I => operand2(8),
      O => operand2_8_IBUF_190
    );
  operand2_7_IBUF : IBUF
    port map (
      I => operand2(7),
      O => operand2_7_IBUF_189
    );
  operand2_6_IBUF : IBUF
    port map (
      I => operand2(6),
      O => operand2_6_IBUF_188
    );
  operand2_5_IBUF : IBUF
    port map (
      I => operand2(5),
      O => operand2_5_IBUF_187
    );
  operand2_4_IBUF : IBUF
    port map (
      I => operand2(4),
      O => operand2_4_IBUF_186
    );
  operand2_3_IBUF : IBUF
    port map (
      I => operand2(3),
      O => operand2_3_IBUF_185
    );
  operand2_2_IBUF : IBUF
    port map (
      I => operand2(2),
      O => operand2_2_IBUF_182
    );
  operand2_1_IBUF : IBUF
    port map (
      I => operand2(1),
      O => operand2_1_IBUF_171
    );
  operand2_0_IBUF : IBUF
    port map (
      I => operand2(0),
      O => operand2_0_IBUF_160
    );
  result_31_OBUF : OBUF
    port map (
      I => result_31_OBUF_248,
      O => result(31)
    );
  result_30_OBUF : OBUF
    port map (
      I => result_30_OBUF_247,
      O => result(30)
    );
  result_29_OBUF : OBUF
    port map (
      I => result_29_OBUF_245,
      O => result(29)
    );
  result_28_OBUF : OBUF
    port map (
      I => result_28_OBUF_244,
      O => result(28)
    );
  result_27_OBUF : OBUF
    port map (
      I => result_27_OBUF_243,
      O => result(27)
    );
  result_26_OBUF : OBUF
    port map (
      I => result_26_OBUF_242,
      O => result(26)
    );
  result_25_OBUF : OBUF
    port map (
      I => result_25_OBUF_241,
      O => result(25)
    );
  result_24_OBUF : OBUF
    port map (
      I => result_24_OBUF_240,
      O => result(24)
    );
  result_23_OBUF : OBUF
    port map (
      I => result_23_OBUF_239,
      O => result(23)
    );
  result_22_OBUF : OBUF
    port map (
      I => result_22_OBUF_238,
      O => result(22)
    );
  result_21_OBUF : OBUF
    port map (
      I => result_21_OBUF_237,
      O => result(21)
    );
  result_20_OBUF : OBUF
    port map (
      I => result_20_OBUF_236,
      O => result(20)
    );
  result_19_OBUF : OBUF
    port map (
      I => result_19_OBUF_234,
      O => result(19)
    );
  result_18_OBUF : OBUF
    port map (
      I => result_18_OBUF_233,
      O => result(18)
    );
  result_17_OBUF : OBUF
    port map (
      I => result_17_OBUF_232,
      O => result(17)
    );
  result_16_OBUF : OBUF
    port map (
      I => result_16_OBUF_231,
      O => result(16)
    );
  result_15_OBUF : OBUF
    port map (
      I => result_15_OBUF_230,
      O => result(15)
    );
  result_14_OBUF : OBUF
    port map (
      I => result_14_OBUF_229,
      O => result(14)
    );
  result_13_OBUF : OBUF
    port map (
      I => result_13_OBUF_228,
      O => result(13)
    );
  result_12_OBUF : OBUF
    port map (
      I => result_12_OBUF_227,
      O => result(12)
    );
  result_11_OBUF : OBUF
    port map (
      I => result_11_OBUF_226,
      O => result(11)
    );
  result_10_OBUF : OBUF
    port map (
      I => result_10_OBUF_225,
      O => result(10)
    );
  result_9_OBUF : OBUF
    port map (
      I => result_9_OBUF_255,
      O => result(9)
    );
  result_8_OBUF : OBUF
    port map (
      I => result_8_OBUF_254,
      O => result(8)
    );
  result_7_OBUF : OBUF
    port map (
      I => result_7_OBUF_253,
      O => result(7)
    );
  result_6_OBUF : OBUF
    port map (
      I => result_6_OBUF_252,
      O => result(6)
    );
  result_5_OBUF : OBUF
    port map (
      I => result_5_OBUF_251,
      O => result(5)
    );
  result_4_OBUF : OBUF
    port map (
      I => result_4_OBUF_250,
      O => result(4)
    );
  result_3_OBUF : OBUF
    port map (
      I => result_3_OBUF_249,
      O => result(3)
    );
  result_2_OBUF : OBUF
    port map (
      I => result_2_OBUF_246,
      O => result(2)
    );
  result_1_OBUF : OBUF
    port map (
      I => result_1_OBUF_235,
      O => result(1)
    );
  result_0_OBUF : OBUF
    port map (
      I => result_0_OBUF_224,
      O => result(0)
    );

end Structure;

