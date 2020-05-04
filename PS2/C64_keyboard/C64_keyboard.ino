/*
  C64keyboard - Commodore Keyboard library

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

#include <PS2KeyAdvanced.h>
#include "C64keyboard.h"


PS2KeyAdvanced keyboard;
C64keyboard ckey;
static volatile uint8_t  currkeymap = 1, flags ;
static const C64Keymap_t *keymap = NULL;
static volatile bool lshift = false, rshift = false, capslock = false ;


void setup() {

  // Configure the keyboard library
  keyboard.begin(PS2_DATA_PIN, PS2_IRQ_PIN );
  keyboard.setNoRepeat (1);
  keyboard.setNoBreak (0);
  ckey.begin();
  if (debug) {
    Serial.begin( 115200 );
    Serial.println("C64 PS/2 keyboard");
  }
}


void loop() {
  if ( keyboard.available()) {
    c64key(keyboard.read());
  }

  int c = Serial.read();
  if (c >= 32) {
    Serial.print("GOT: ");
    Serial.println(c);
    c64key(c);
    delay(500);
    c64key(c | (1 << (8 + FLAG_KEYUP)));
  }

}
