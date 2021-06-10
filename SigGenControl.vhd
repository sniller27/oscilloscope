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
			MOSI    : in std_logic;
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
signal AdrEn, DataEn, ShapeEn, AmplEn, FreqEn: std_logic;
signal SPIdat, RegVal, Addr, Data: std_logic_vector(7 downto 0);  

begin

-- MOSI Register (skifteregister) - skifter MOSI ind på hver clock til SPIdat hele tiden (data modtages via SPI)
MOSI_Reg: process (CLK, Reset)
begin
	if (Reset = '1') then SPIdat <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		SPIdat <= MOSI & SPIdat(7 downto 1); -- skifter til højre
	end if;
end process;

-- Addresse Register (skifteregister - skifter på Adr-flag efter synkronisering)
AddrReg: process (CLK, Reset)
begin
	if (Reset = '1') then Addr <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (AdrEn = '1') then
			Addr <= MOSI & Addr(7 downto 1); -- skifter til højre
		end if;
	end if;
end process;

-- Data Register (skifteregister - skifter på Data-flag efter addresse læsning)
DataReg: process (CLK, Reset)
begin
	if (Reset = '1') then Data <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (DataEn = '1') then
			Data <= MOSI & Data(7 downto 1); -- skifter til højre
		end if;
	end if;
end process;






-- ShapeReg (standard register - videregiver data til Shape)
ShapeReg: process (CLK, Reset)
begin
	if (Reset = '1') then Shape <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (ShapeEn = '1') then
			Shape <= SPIdat;
		end if;
	end if;
end process;

-- AmplReg (standard register  - videregiver data til Ampl)
AmplReg: process (CLK, Reset)
begin
	if (Reset = '1') then Ampl <= X"00"; -- async reset
	elsif (CLK'event and CLK = '0') then -- nedadgående flanke (falling edge)
		if (AmplEn = '1') then
			Ampl <= SPIdat;
		end if;
	end if;
end process;

-- FreqReg (standard register - videregiver data til Freq)
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
StateDec: process (State, MOSI, SS) --State decoder: next state and output decoder (X er et udefrakommende input, der styrer tilstandsmaskinen)
begin

AdrEn <= '0'; -- default value
DataEn <= '0'; -- default value
--ShapeEn <= '0'; -- default value
--AmplEn <= '0'; -- default value
--FreqEn <= '0'; -- default value
SigEn <= '0'; -- default value


NextState <= State; -- set state (for at undgå latch?)

case State is

--Sync
when IdleS =>
Shape <= "00000000"; 
Ampl <= "00000000";
Freq <= "00000000";

if SS='1' AND SPIdat="01010101" then -- 0x55
	
	-- start address reading
	NextState <= AddrS;
	
end if;

--Read address
when AddrS =>
AdrEn <= '1'; -- enable address reading
if SS='1' then
	
	-- start data reading
	NextState <= DataS;
	
end if;

--Read_data
when DataS =>
DataEn <= '1'; -- enable data reading
if SS='1' then
DataEn <= '0';		
	-- transfer data to correct address by using standard register (?)
--	if Addr(7 downto 6)="00" then ShapeEn <= '1';
--	elsif Addr(7 downto 6)="01" then AmplEn <= '1';		
--	elsif Addr(7 downto 6)="10" then FreqEn <= '1';
--	end if;
	
	if Addr(7 downto 6)="00" then Shape <= SPIdat;
	elsif Addr(7 downto 6)="01" then Ampl <= SPIdat;	
	elsif Addr(7 downto 6)="10" then Freq <= SPIdat;
	end if;
		
	-- start checksum reading
	NextState <= ChksumS;
	
end if;

--Checksum
when ChksumS =>
if SS='1' then

	RegVal <= "01010101" XOR Addr XOR Data; -- checksum
	
	-- compare checksums
	if RegVal=SPIdat then
		SigEn <= '1';
		NextState <= IdleS;
	end if;
	
end if;

end case;

end process;


end Behavioral;
