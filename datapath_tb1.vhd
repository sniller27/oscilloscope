--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:22:09 06/07/2021
-- Design Name:   
-- Module Name:   C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/datapath_tb1.vhd
-- Project Name:  oscilloscope
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SigGenDatapath
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
 
ENTITY datapath_tb1 IS
END datapath_tb1;
 
ARCHITECTURE behavior OF datapath_tb1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SigGenDatapath
    PORT(
         Reset : IN  std_logic;
         Clk : IN  std_logic;
         SigEN : IN  std_logic;
         Shape : IN  std_logic_vector(1 downto 0);
         Ampl : IN  std_logic_vector(7 downto 0);
         Freq : IN  std_logic_vector(7 downto 0);
         PWMOut : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Reset : std_logic := '0';
   signal Clk : std_logic := '0';
   signal SigEN : std_logic := '0';
   signal Shape : std_logic_vector(1 downto 0) := (others => '0');
   signal Ampl : std_logic_vector(7 downto 0) := (others => '0');
   signal Freq : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal PWMOut : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SigGenDatapath PORT MAP (
          Reset => Reset,
          Clk => Clk,
          SigEN => SigEN,
          Shape => Shape,
          Ampl => Ampl,
          Freq => Freq,
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
      -- wait for 100 ns;	

      -- wait for Clk_period*10;

      -- insert stimulus here
		Reset <= '1';
		wait for Clk_period;
		Reset <= '0';
		wait for Clk_period;
		
		
		shape <= "11";
		ampl <= "00000111";
		freq <= "00000001";
		SigEN <= '1';
		
		

      wait;
   end process;

END;
