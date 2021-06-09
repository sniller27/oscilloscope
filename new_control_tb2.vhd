--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:18:21 06/09/2021
-- Design Name:   
-- Module Name:   C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/new_control_tb2.vhd
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
 
ENTITY new_control_tb2 IS
END new_control_tb2;
 
ARCHITECTURE behavior OF new_control_tb2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SigGenControl
    PORT(
         RESET : IN  std_logic;
         CLK : IN  std_logic;
         data_in : IN  std_logic;
         SS : IN  std_logic;
         Disp : OUT  std_logic_vector(19 downto 0);
         Shape : INOUT  std_logic_vector(7 downto 0);
         Ampl : INOUT  std_logic_vector(7 downto 0);
         Freq : INOUT  std_logic_vector(7 downto 0);
         SigEn : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal RESET : std_logic := '0';
   signal CLK : std_logic := '0';
   signal data_in : std_logic := '0';
   signal SS : std_logic := '0';

	--BiDirs
   signal Shape : std_logic_vector(7 downto 0);
   signal Ampl : std_logic_vector(7 downto 0);
   signal Freq : std_logic_vector(7 downto 0);

 	--Outputs
   signal Disp : std_logic_vector(19 downto 0);
   signal SigEn : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SigGenControl PORT MAP (
          RESET => RESET,
          CLK => CLK,
          data_in => data_in,
          SS => SS,
          Disp => Disp,
          Shape => Shape,
          Ampl => Ampl,
          Freq => Freq,
          SigEn => SigEn
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      reset <= '1';
		wait for Clk_period;
		reset <= '0';
		wait for Clk_period;
      -- hold reset state for 100 ns.
		
		--Sync
		SS <= '1';
		wait for Clk_period;
		SS <= '0';
		
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		
		--Address
		SS <= '1';
		data_in <= '0';
		
		wait for Clk_period;
		
		SS <= '0';
		
		data_in <= '0';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		
		--Data
		SS <= '1';
		data_in <= '0';
		wait for Clk_period;
		SS <= '0';
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		
		SS <= '1';
		wait for Clk_period;
		SS <= '0';
		
		--CRC
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '0';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		data_in <= '1';
		wait for Clk_period;
		
		SS <= '1';
		wait for Clk_period;
		SS <= '0';

      wait;
   end process;

END;
