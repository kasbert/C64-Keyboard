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

#include <avr/wdt.h>
#include <PS2KeyAdvanced.h>
#include "C64keyboard.h"


PS2KeyAdvanced keyboard;
C64keyboard ckey;

void setup() {

  // Configure the keyboard library
  keyboard.begin(PS2_DATA_PIN, PS2_IRQ_PIN );
  keyboard.setNoRepeat (1);
  keyboard.setNoBreak (0);
  ckey.debug = true;
  ckey.begin(keyboard);
  if (ckey.debug) {
    Serial.begin( 115200 );
    Serial.println("C64 PS/2 keyboard");
  }
}


void loop() {
  wdt_enable(WDTO_1S);     // enable the watchdog
  
  if ( keyboard.available()) {
    ckey.c64key(keyboard.read());
  }
  
  int c = Serial.read();
  if (c >= 32) {
    Serial.print("GOT: ");
    Serial.println(c);
    ckey.c64key(c);
    delay(500);
    ckey.c64key(c | (1 << (8 + FLAG_KEYUP)));
  }
  wdt_reset();
}
