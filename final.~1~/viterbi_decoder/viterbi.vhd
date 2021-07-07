----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:33:19 07/03/2021 
-- Design Name: 
-- Module Name:    viterbi - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use ieee.numeric_std.all;
constant timeSteps : integer := 100;
constant statesNumber : integer := 64;
--use IEEE.STD_LOGIC_UNSIGNED.ALL;
--use ieee.std_logic_signed.all;
---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity viterbi is
    Port ( clk : in  STD_LOGIC;
           clr : in  STD_LOGIC;
           data_in : in std_logic_vector(1 downto 0);
           decoded_data : out  STD_LOGIC);
end viterbi;

architecture Behavioral of viterbi is

type matrix_4 is array (0 to 65) of integer;
type matrix_5 is array (0 to timeSteps)of std_logic;
type matrix_6 is array (0 to stateNumber - 1, 0 to timeSteps + 1) of integer;
type matrix_7 is array (0 to stateNumber - 1) of std_logic;
begin

--intialization
process ( clk , clr )
variable counter: integer range 0 to 100;
variable flag :std_logic := '0';
variable current_state : std_logic_vector(5 downto 0):= "000000";
variable timeSteps: std_logic_vector(6 downto 0):= "0000000"; --iterator of the first loop;
variable hamming_dis0 : matrix_3;
variable hamming_dis1 : matrix_3;
variable hamming_dis2 : matrix_3;
variable hamming_dis3 : matrix_3;
variable hammings1 : std_logic_vector(1 downto 0); --in = 0
variable hammings2 : std_logic_vector(1 downto 0); --in = 1
variable PM1 :  integer :=0;
variable PM2 :  integer :=0;
variable PM : matrix_6;
variable stateRecorder : matrix_6;
variable outputBuffer : matrix_5; --filo
variable topBufferPointer : integer; 
variable bottomBufferPointer : integer; 
variable smallest : integer;
-- variable nextStates_0: matrix_5 := ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());
-- variable nextStates_1: matrix_5 := ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());
-- variable previosStates_0: matrix_5:= ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());
-- variable previousStates_1: matrix_5:= ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());
-- variable x_0: matrix_7 := ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());
-- variable x_1: matrix_7 := ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());
-- variable y_0: matrix_7 := ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());
-- variable y_1: matrix_7 := ((), (), (), (), (), () ,(), (), (), (), (), (), (), (), (), () ,(), (), (), (), 
--(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), 
(), (), (), (), (), () ,(), (), (), (), ,(), (), (), ());

begin 
if clr = '1' then 
--current_state := "000000";
decoded_data <= '0';
elsif (clk ' event and clk = '1' ) then


--trellis
  
for state in 0 to statesNumber - 1 loop 
	current_state := conv_std_logic_vector (state , 6);


	--BMU
	hamming_dis0(0) := data_in(0) xor x_0(state);
	hamming_dis1(1) := data_in(1) xor y_0(state);
	hamming_dis2(2) := data_in(0) xor x_1(state);
	hamming_dis3(3) := data_in(1) xor y_1(state);
	
	
	
	hammingdis1 := (hamming_dis0(0) and hamming_dis1(1)) & (hamming_dis0(0) xor hamming_dis1(1));
	hammingdis2 := (hamming_dis2(2) and hamming_dis3(3)) & (hamming_dis2(2) xor hamming_dis3(3));
	
	

--PMU
--ADD
	PM1 := PM(state, counter) + conv_integer(hammings1);
	PM2 := PM(state, counter) + conv_integer(hammings2);
	--COMPARE,SELECT
	if PM1 < PM2 then
		PM(state, counter+1) := PM1;
		stateRecorder(state, counter) := prev_state0(state); 
	else 
		PM(state, counter+1) := PM2; 
		stateRecorder(state, counter) := prev_state1(state);
	end if;
end loop;
countrer = counter +1;
 

--TBU
if(counnter = timeSteps) then end if;
--CALCULATE BEST PATH
	smallestState := 0;
	smallestValue := PM(0, timeSteps);
for state in 1 to statesNumber - 1 loop
	if smallestValue > PM(state, timeSteps) then
		smallestState := state;
		smallestValue := PM(state, timeSteps);
	end if;
end loop;

	for iterator in timeSteps-1 downto 0 loop  
		outputBuffer(iterator) := smallestState(5);
		smallestState = stateRecorder(smallestState, timeStep -1);
	end loop;
	topBufferPointer := 0;
	topBufferPointer := 99;
end if;
end process;
decoded <= outputBuffer(topBufferPointer);
end Behavioral;

