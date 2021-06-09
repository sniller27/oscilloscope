--------------------------------------------------------------------------------
-- Company:        DTU
-- Engineer:       Peter Brauer
--
-- Create Date:    10:07:10 05/12/09
-- Design Name:    
-- Module Name:    SigGenControl - Behavioral
-- Project Name:   Signal Generator
-- Target Device:  Spartan 3
-- Tool versions:  
-- Description:    Control circuit for the Signal Generator system
--
-- Dependencies:   
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
--------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity SigGenControl is
  Port ( RESET  : in std_logic;
         CLK    : in std_logic;
			data_in    : in std_logic;
         SS    : in std_logic;
         Disp   : out std_logic_vector(19 downto 0);
         Shape  : inout std_logic_vector(7 downto 0);
         Ampl   : inout std_logic_vector(7 downto 0);
         Freq   : inout std_logic_vector(7 downto 0);
         SigEn  : out std_logic);
end SigGenControl;

architecture Behavioral of SigGenControl is

-- til tilstandsmaskine
type StateType is (Sync, Read_address, Read_data, Checksum);
signal State, NextState: StateType;

-- signaler
signal Addr_Shape, Addr_Ampl, Addr_Freq: std_logic;
signal SPIdat, RegVal, Selected_address: std_logic_vector(7 downto 0);  

begin

-- shiftregister (skifter data ind)
Shift_register: process (CLK, Reset)
begin
	if (Reset = '1') then SPIdat <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		SPIdat <= data_in & SPIdat(7 downto 1); -- skifter til højre
		--SPIdat <= SPIdat(6 downto 0) & MOSI; -- skifter til venstre
	end if;
end process;

-- next state (tilstandsmaskine)
StateReg: process (Reset, CLK)
begin
  if RESET = '1' then State <= Sync;
  elsif CLK'event and CLK = '1' then
    State <= NextState;
  end if;
end process;

-- logik og tilstande (tilstandsmaskine)
StateDec: process (State, data_in, SS) --State decoder: next state and output decoder (X er et udefrakommende input, der styrer tilstandsmaskinen)
begin

Shape <= "00000000"; -- default value
Ampl <= "00000000"; -- default value
Freq <= "00000000"; -- default value

NextState <= State; -- set state (for at undgå latch?)

case State is

--Sync
when Sync =>
if SS='1' AND SPIdat="01010101" then
	--RegVal <= SPIdat; -- initial checksum
	NextState <= Read_address;
end if;

--Read_address
when Read_address =>
if SS='1' then

	Selected_address <= SPIdat; -- gemmer addresse
	--RegVal <= RegVal XOR SPIdat; -- update checksum
	NextState <= Read_data;
	
end if;

--Read_data
when Read_data =>
if SS='1' then

-- set all data to zero
Shape <= "00000000";
Ampl <= "00000000";
Freq <= "00000000";
	
	if Selected_address(7 downto 6)="00" then

		Shape <= SPIdat;
		
	elsif Selected_address(7 downto 6)="01" then

		Ampl <= SPIdat;
		
	elsif Selected_address(7 downto 6)="10" then

		Freq <= SPIdat;
		
	end if;
	
	--RegVal <= RegVal XOR SPIdat; -- update checksum
	NextState <= Checksum;
	
end if;

--Checksum
when Checksum =>

RegVal <= "01010101" XOR Selected_address XOR Shape XOR Ampl XOR Freq;
if SS='1' AND RegVal=SPIdat then
	SigEn <= '1';
	NextState <= Sync;
end if;

end case;

end process;


end Behavioral;
