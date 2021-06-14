--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:33:57 06/11/2021
-- Design Name:   
-- Module Name:   C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/tb_SPI_control_new.vhd
-- Project Name:  oscilloscope
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SigGenControl
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
 
ENTITY tb_SPI_control_new IS
END tb_SPI_control_new;
 
ARCHITECTURE behavior OF tb_SPI_control_new IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SigGenControl
    PORT(
         RESET : IN  std_logic;
         CLK : IN  std_logic;
         SCLK : IN  std_logic;
         MOSI : IN  std_logic;
         SS : IN  std_logic;
         Disp : OUT  std_logic_vector(19 downto 0);
         Shape : INOUT  std_logic_vector(7 downto 0);
         Ampl : INOUT  std_logic_vector(7 downto 0);
         Freq : INOUT  std_logic_vector(7 downto 0);
         SigEn : OUT  std_logic;
         Byte : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal RESET : std_logic := '0';
   signal CLK : std_logic := '0';
   signal SCLK : std_logic := '0';
   signal MOSI : std_logic := '0';
   signal SS : std_logic := '0';

	--BiDirs
   signal Shape : std_logic_vector(7 downto 0);
   signal Ampl : std_logic_vector(7 downto 0);
   signal Freq : std_logic_vector(7 downto 0);

 	--Outputs
   signal Disp : std_logic_vector(19 downto 0);
   signal SigEn : std_logic;
   signal Byte : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
   constant SCLK_period : time := 250 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SigGenControl PORT MAP (
          RESET => RESET,
          CLK => CLK,
          SCLK => SCLK,
          MOSI => MOSI,
          SS => SS,
          Disp => Disp,
          Shape => Shape,
          Ampl => Ampl,
          Freq => Freq,
          SigEn => SigEn,
          Byte => Byte
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
   SCLK_process :process
   begin
		SCLK <= '0';
		wait for SCLK_period/2;
		SCLK <= '1';
		wait for SCLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      --wait for 100 ns;	

      --wait for CLK_period*10;

      -- insert stimulus here 
		-- hold reset state for 100 ns.
      reset <= '1';
		wait for Clk_period;
		reset <= '0';
		wait for Clk_period;
        
		--Sync
		SS <= '1';
		wait for SCLK_period;
		SS <= '0';
		
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		
		--Address
		SS <= '1';
		wait for SCLK_period;
		SS <= '0';
		
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		
		--Data
		SS <= '1';
		wait for SCLK_period;
		SS <= '0';
		
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		
		SS <= '1';
		wait for SCLK_period;
		SS <= '0';
		
		--CRC
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '0';
		wait for SCLK_period;
		MOSI <= '1';
		wait for SCLK_period;
		
		SS <= '1';
		wait for SCLK_period;
		SS <= '0';

      wait;
   end process;

END;
