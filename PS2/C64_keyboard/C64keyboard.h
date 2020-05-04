/*
  C64keyboard.h - Commodore Keyboard library

  Copyright (c) 2019 Hartland PC LLC
  Written by Robert VanHazinga



  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#ifndef C64keyboard_h
#define C64keyboard_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#define C64_KEYMAP_SIZE 	   132 // Size of each array in the key maps

#include "keymapping.h"



#define debug   true  //Set true for serial monitor of C64 keycodes and PS/2 keycodes



#define MT8808  false    // Set true if using MT8808 and false if using MT8812 ot MT8816

#if 0

//PS2 communication pins
#define DATA_PIN				12 // Data pin for PS2 keyboard
#define IRQ_PIN					3  // Interrupt pin for PS2 keyboard

//MT88xx control pins
#define ANALOG_SW_DATA      2 // Sets selected cross switch on/off (Old 13)
#define ANALOG_SW_STROBE    4 // Strobe timing pulse
#define ANALOG_SW_RESET     13 // Reset all MT88XX cross switches to off (Old 2)

#define ANALOG_SW_AY0     7  // Pin that controls AY0 
#define ANALOG_SW_AY1     6  // Pin that controls AY1
#define ANALOG_SW_AY2     5  // Pin that controls AY2
#define ANALOG_SW_AX0     10  // Pin that controls AX0
#define ANALOG_SW_AX1     9 // Pin that controls AX1 
#define ANALOG_SW_AX2     8 // Pin that controls AX2
#define ANALOG_SW_AX3     11 // Pin that controls AX3 (MT8812 & MT8816) 

//C64 NMI setup
#define NMI_PIN           A0 //Analog pin 0

#else

//PS2 communication pins
#define PS2_DATA_PIN        A0 // Data pin for PS2 keyboard
#define PS2_IRQ_PIN         2  // Interrupt (clk) pin for PS2 keyboard

//MT88xx control pins
#define ANALOG_SW_DATA    3  // Sets selected cross switch on/off
#define ANALOG_SW_STROBE  12 // Strobe timing pulse
#define ANALOG_SW_RESET   5  // Reset all MT88XX cross switches to off
#define ANALOG_SW_AY0     9  // Pin that controls AY0
#define ANALOG_SW_AY1     8  // Pin that controls AY1 
#define ANALOG_SW_AY2     4  // Pin that controls AY2 
#define ANALOG_SW_AX0     7  // Pin that controls AX0
#define ANALOG_SW_AX1     11 // Pin that controls AX1
#define ANALOG_SW_AX2     10 // Pin that controls AX2 
#define ANALOG_SW_AX3     6  // Pin that controls AX3 (MT8812 & MT8816) 

//C64 NMI setup
#define NMI_PIN           A5 // NMI

#endif

/*
//Scan code value to enable a key map. Default is key map 1.
#define KEY_MAP_1        0x69 // (DEC 105) F9
#define KEY_MAP_2       0x6A // (DEC 106) F10

// Key map value to reset the MT88xx chip
#define MT_RESET        0x6C // (DEC 108) F12 activates MT88XX reset


#define RESTORE_KEY       0x1D // (DEC 29) Tab acts as Restore key

// Key map value for capslock
#define CAPSLOCK_KEY    0x03 // (DEC 3) CapsLock key 
*/

//Key map value to ignore key press
#define IGNORE_KEYCODE      0xAA //(DEC 170) (Must be > 128)


#define FLAG_SHIFT 6
#define FLAG_KEYUP 7


class C64keyboard {
  public:

    C64keyboard();


    static void begin(const C64Keymap_t &map = C64Keymap_main);

};
#endif
