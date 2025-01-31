/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            1
#define STATUS_LOGO_WIDTH       36
#define TRONXY_MODELS 2

#if TRONXY_MODELS==2
const unsigned char status_logo_bmp[] PROGMEM = {
  B01111111,B11111111,B00011111,B11111111,B11000000, // .###############...###############......
  B01111111,B11111111,B10111111,B11111111,B11000000, // .################.################......
  B01111111,B11111111,B10111111,B11111111,B11000000, // .################.################......
  B00111111,B11111111,B10111111,B11111111,B10000000, // ..###############.###############.......
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00001111,B00011110,B00000000,B00000000, // ............####...####.................
  B00000000,B00000000,B00000000,B00000000,B00000000, // ........................................
  B00110000,B11010000,B01000000,B00000000,B00000000, // ..##....##.#.....#......................
  B00011001,B10010000,B01000000,B00000000,B00000000, // ...##..##..#.....#......................
  B00001111,B00010000,B01000000,B00000000,B00000000, // ....####...#.....#......................
  B00000110,B00001111,B10011101,B11011000,B10000000, // .....##.....#####..###.###.##...#.......
  B00001111,B00000000,B00000101,B01010101,B01000000, // ....####.............#.#.#.#.#.#.#......
  B00011001,B10000111,B00011101,B11011001,B01000000, // ...##..##....###...###.###.##..#.#......
  B00110000,B11000111,B00010001,B00010101,B01000000, // ..##....##...###...#...#...#.#.#.#......
  B00100000,B01000111,B00011101,B00010100,B10000000, // ..#......#...###...###.#...#.#..#.......
  B00000000,B00000000,B00000000,B00000000,B00000000  // ........................................
};
#else
const unsigned char status_logo_bmp[] PROGMEM = {
 B01111111,B11111111,B00011111,B11111111,B11000000, // .###############...###############......
  B01111111,B11111111,B10111111,B11111111,B11000000, // .################.################......
  B01111111,B11111111,B10111111,B11111111,B11000000, // .################.################......
  B00111111,B11111111,B10111111,B11111111,B10000000, // ..###############.###############.......
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00011111,B10111111,B00000000,B00000000, // ...........######.######................
  B00000000,B00001111,B00011110,B00000000,B00000000, // ............####...####.................
  B00000000,B00000000,B00000000,B00000000,B00000000, // ........................................
  B00110000,B11001111,B11000000,B00000000,B00000000, // ..##....##..######......................
  B00011001,B10001000,B00000000,B00000000,B00000000, // ...##..##...#...........................
  B00001111,B00011111,B00000111,B10000111,B10000000, // ....####...#####.....####....####.......
  B00000110,B00011001,B11001100,B00000000,B11000000, // .....##....##..###..##..........##......
  B00001111,B00000000,B11001111,B10000011,B11000000, // ....####........##..#####.....####......
  B00011001,B10011000,B11000000,B11000110,B11000000, // ...##..##..##...##......##...##.##......
  B00110000,B11001111,B10001100,B11001100,B11000000, // ..##....##..#####...##..##..##..##......
  B00100000,B01000111,B00000111,B10000111,B01100000, // ..#......#...###.....####....###.##.....
  B00000000,B00000000,B00000000,B00000000,B00000000, // ........................................
};
#endif

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
