
--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:45:54 07/06/2021
-- Design Name:   viterbi
-- Module Name:   C:/Users/Engy/Desktop/vhdl code/viterbi_decoder/test.vhd
-- Project Name:  viterbi_decoder
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: viterbi
--
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends 
-- that these types always be used for the top-level I/O of a design in order 
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.all;
USE ieee.numeric_std.ALL;

ENTITY test_vhd IS
END test_vhd;

ARCHITECTURE behavior OF test_vhd IS 

	-- Component Declaration for the Unit Under Test (UUT)
	COMPONENT viterbi
	PORT(
		clk : IN std_logic;
		clr : IN std_logic;
		data_in : IN std_logic_vector(1 downto 0);          
		decoded_data : OUT std_logic
		);
	END COMPONENT;

	--Inputs
	SIGNAL clk :  std_logic := '0';
	SIGNAL clr :  std_logic := '0';
	SIGNAL data_in :  std_logic_vector(1 downto 0) := (others=>'0');

	--Outputs
	SIGNAL decoded_data :  std_logic;

BEGIN

	-- Instantiate the Unit Under Test (UUT)
	uut: viterbi PORT MAP(
		clk => clk,
		clr => clr,
		data_in => data_in,
		decoded_data => decoded_data
	);

	tb : PROCESS
	BEGIN

		-- Wait 100 ns for global reset to finish
		wait for 100 ns;

		-- Place stimulus here

		wait; -- will wait forever
	END PROCESS;

END;
