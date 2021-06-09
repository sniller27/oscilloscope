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
type StateType is (IdleS, AddrS, DataS, ChksumS);
signal State, NextState: StateType;

-- signaler
signal Addr_Shape, Addr_Ampl, Addr_Freq, AdrEn, DataEn, ShapeEn, AmplEn, FreqEn: std_logic;
signal SPIdat, RegVal, Selected_address, Addr, Data: std_logic_vector(7 downto 0);  

begin

-- MISO Register (skifteregister)
MISO_Reg: process (CLK, Reset)
begin
	if (Reset = '1') then SPIdat <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		SPIdat <= data_in & SPIdat(7 downto 1); -- skifter til højre
	end if;
end process;






-- Addresse Register (skifteregister)
AddrReg: process (CLK, Reset)
begin
	if (Reset = '1') then Addr <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (AdrEn = '1') then
			Addr <= data_in & Addr(7 downto 1); -- skifter til højre
		end if;
	end if;
end process;

-- Data Register (skifteregister)
DataReg: process (CLK, Reset)
begin
	if (Reset = '1') then Data <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (DataEn = '1') then
			Data <= data_in & Data(7 downto 1); -- skifter til højre
		end if;
	end if;
end process;






-- ShapeReg (standard register)
ShapeReg: process (CLK, Reset)
begin
	if (Reset = '1') then Shape <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (ShapeEn = '1') then
			Shape <= SPIdat;
		end if;
	end if;
end process;

-- AmplReg (standard register)
AmplReg: process (CLK, Reset)
begin
	if (Reset = '1') then Ampl <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (AmplEn = '1') then
			Ampl <= SPIdat;
		end if;
	end if;
end process;

-- FreqReg (standard register)
FreqReg: process (CLK, Reset)
begin
	if (Reset = '1') then Freq <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (FreqEn = '1') then
			Freq <= SPIdat;
		end if;
	end if;
end process;







-- next state (tilstandsmaskine)
StateReg: process (Reset, CLK)
begin
  if RESET = '1' then State <= IdleS;
  elsif CLK'event and CLK = '1' then
    State <= NextState;
  end if;
end process;

-- logik og tilstande (tilstandsmaskine)
StateDec: process (State, data_in, SS) --State decoder: next state and output decoder (X er et udefrakommende input, der styrer tilstandsmaskinen)
begin

--AdrEn <= '0'; -- default value
--DataEn <= '0'; -- default value

Shape <= "00000000"; -- default value
Ampl <= "00000000"; -- default value
Freq <= "00000000"; -- default value

NextState <= State; -- set state (for at undgå latch?)

case State is

--Sync
when IdleS =>
if SS='1' AND SPIdat="01010101" then -- 0x55

	-- synchronization succesfull (next state)
	AdrEn <= '1';
	NextState <= AddrS;
	
end if;

--Read address
when AddrS =>
if SS='1' then

	-- address has been shifted in (next state)
	if Addr(7 downto 6)="00" then ShapeEn <= '1';
	elsif Addr(7 downto 6)="01" then AmplEn <= '1';		
	elsif Addr(7 downto 6)="10" then FreqEn <= '1';
	end if;
	
	DataEn <= '1';
	NextState <= DataS;
	
end if;

--Read_data
when DataS =>

if SS='1' then

	-- data has been shifted in (next state)
	NextState <= ChksumS;
	
end if;

--Checksum
when ChksumS =>
-- BØR 'SIG_EN' SÆTTES I ET SEPARAT STANDARD REGISTER???
RegVal <= "01010101" XOR Addr XOR Data;
if SS='1' AND RegVal=SPIdat then
	SigEn <= '1';
	NextState <= IdleS;
end if;

end case;

end process;


end Behavioral;
