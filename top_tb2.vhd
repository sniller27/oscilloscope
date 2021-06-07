--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:32:09 06/07/2021
-- Design Name:   
-- Module Name:   C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/top_tb2.vhd
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
 
ENTITY top_tb2 IS
END top_tb2;
 
ARCHITECTURE behavior OF top_tb2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SigGenTop
    PORT(
         BTN3 : IN  std_logic;
         Clk : IN  std_logic;
         BTN0 : IN  std_logic;
         BTN1 : IN  std_logic;
         BTN2 : IN  std_logic;
         SW : IN  std_logic_vector(7 downto 0);
         An : OUT  std_logic_vector(3 downto 0);
         Cat : OUT  std_logic_vector(7 downto 0);
         LD : OUT  std_logic;
         PWMOut : INOUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal BTN3 : std_logic := '0';
   signal Clk : std_logic := '0';
   signal BTN0 : std_logic := '0';
   signal BTN1 : std_logic := '0';
   signal BTN2 : std_logic := '0';
   signal SW : std_logic_vector(7 downto 0) := (others => '0');

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
          BTN0 => BTN0,
          BTN1 => BTN1,
          BTN2 => BTN2,
          SW => SW,
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
		wait for 10 ns;
		BTN3 <= '0';
		wait for 10 ns;
		
		
		
		SW <= "00000001";
		
		-- set
		wait for 10 ns;
		BTN0 <= '1';
		wait for 10 ns;
		BTN0 <= '0';
		
		wait for Clk_period;
		
		-- next
		BTN1 <= '1';
		wait for 10 ns;
		BTN1 <= '0';
		wait for 10 ns;
		
		SW <= "00001111";
		
		-- set
		wait for 10 ns;
		BTN0 <= '1';
		wait for 10 ns;
		BTN0 <= '0';
		
		wait for Clk_period;
		
		-- next
		BTN1 <= '1';
		wait for 10 ns;
		BTN1 <= '0';
		wait for 10 ns;
		
		SW <= "00001111";
		
		-- set
		wait for 10 ns;
		BTN0 <= '1';
		wait for 10 ns;
		BTN0 <= '0';
		
		wait for Clk_period;
		
		-- run
		BTN2 <= '1';
		wait for 10 ns;
		BTN2 <= '0';
		wait for 10 ns;

      wait;
   end process;

END;
