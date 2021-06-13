--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:23:43 06/10/2021
-- Design Name:   
-- Module Name:   C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/SPI_tb_top.vhd
-- Project Name:  oscilloscope
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SigGenTop
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY SPI_tb_top IS
END SPI_tb_top;
 
ARCHITECTURE behavior OF SPI_tb_top IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SigGenTop
    PORT(
         BTN3 : IN  std_logic;
         Clk : IN  std_logic;
         SCK : IN  std_logic;
         MOSI : IN  std_logic;
         SS : IN  std_logic;
         An : OUT  std_logic_vector(3 downto 0);
         Cat : OUT  std_logic_vector(7 downto 0);
         LD : OUT  std_logic;
         PWMOut : INOUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal BTN3 : std_logic := '0';
   signal Clk : std_logic := '0';
   signal SCK : std_logic := '0';
   signal MOSI : std_logic := '0';
   signal SS : std_logic := '0';

	--BiDirs
   signal PWMOut : std_logic;

 	--Outputs
   signal An : std_logic_vector(3 downto 0);
   signal Cat : std_logic_vector(7 downto 0);
   signal LD : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SigGenTop PORT MAP (
          BTN3 => BTN3,
          Clk => Clk,
          SCK => SCK,
          MOSI => MOSI,
          SS => SS,
          An => An,
          Cat => Cat,
          LD => LD,
          PWMOut => PWMOut
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      BTN3 <= '1';
		wait for Clk_period;
		BTN3 <= '0';
		wait for Clk_period;
       
		--Sync
		SS <= '1';
		wait for Clk_period;
		SS <= '0';
		
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		
		--Address
		SS <= '1';
		wait for Clk_period;
		SS <= '0';
		
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		
		--Data
		SS <= '1';
		wait for Clk_period;
		SS <= '0';
		
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		
		SS <= '1';
		wait for Clk_period;
		SS <= '0';
		
		--CRC
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '0';
		wait for Clk_period;
		MOSI <= '1';
		wait for Clk_period;
		
		SS <= '1';
		wait for Clk_period;
		SS <= '0';

      wait;
   end process;

END;
