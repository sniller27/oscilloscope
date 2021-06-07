--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:09:24 06/07/2021
-- Design Name:   
-- Module Name:   C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/control_tb2.vhd
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
 
ENTITY control_tb2 IS
END control_tb2;
 
ARCHITECTURE behavior OF control_tb2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SigGenControl
    PORT(
         Reset : IN  std_logic;
         Clk : IN  std_logic;
         BTN0 : IN  std_logic;
         BTN1 : IN  std_logic;
         BTN2 : IN  std_logic;
         SW : IN  std_logic_vector(7 downto 0);
         Disp : OUT  std_logic_vector(19 downto 0);
         Shape : INOUT  std_logic_vector(1 downto 0);
         Ampl : INOUT  std_logic_vector(7 downto 0);
         Freq : INOUT  std_logic_vector(7 downto 0);
         SigEn : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Reset : std_logic := '0';
   signal Clk : std_logic := '0';
   signal BTN0 : std_logic := '0';
   signal BTN1 : std_logic := '0';
   signal BTN2 : std_logic := '0';
   signal SW : std_logic_vector(7 downto 0) := (others => '0');

	--BiDirs
   signal Shape : std_logic_vector(1 downto 0);
   signal Ampl : std_logic_vector(7 downto 0);
   signal Freq : std_logic_vector(7 downto 0);

 	--Outputs
   signal Disp : std_logic_vector(19 downto 0);
   signal SigEn : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SigGenControl PORT MAP (
          Reset => Reset,
          Clk => Clk,
          BTN0 => BTN0,
          BTN1 => BTN1,
          BTN2 => BTN2,
          SW => SW,
          Disp => Disp,
          Shape => Shape,
          Ampl => Ampl,
          Freq => Freq,
          SigEn => SigEn
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
      Reset <= '1';
		wait for 10 ns;
		Reset <= '0';
		wait for 10 ns;
		
		
		
		SW <= "00000001";
		
		-- set
		wait for 10 ns;
		BTN0 <= '1';
		wait for 10 ns;
		BTN0 <= '0';
		
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
		
		-- run
		BTN2 <= '1';
		wait for 10 ns;
		BTN2 <= '0';
		wait for 10 ns;

      wait;
   end process;

END;
