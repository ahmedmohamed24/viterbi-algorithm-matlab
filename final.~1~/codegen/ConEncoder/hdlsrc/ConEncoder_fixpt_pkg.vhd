-- -------------------------------------------------------------
-- 
-- File Name: Z:\Documents\Viterbi Algorithm\final\codegen\ConEncoder\hdlsrc\ConEncoder_fixpt_pkg.vhd
-- Created: 2021-07-07 20:19:08
-- 
-- Generated by MATLAB 9.4, MATLAB Coder 4.0 and HDL Coder 3.12
-- 
-- 
-- -------------------------------------------------------------


LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

PACKAGE ConEncoder_fixpt_pkg IS
  TYPE vector_of_signed32 IS ARRAY (NATURAL RANGE <>) OF signed(31 DOWNTO 0);
  TYPE vector_of_unsigned6 IS ARRAY (NATURAL RANGE <>) OF unsigned(5 DOWNTO 0);
  TYPE vector_of_unsigned7 IS ARRAY (NATURAL RANGE <>) OF unsigned(6 DOWNTO 0);
END ConEncoder_fixpt_pkg;

