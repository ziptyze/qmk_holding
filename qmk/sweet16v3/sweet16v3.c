/* Copyright 2022 ziptyze
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "sweet16v3.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { 0, 1, 2, 3 },
    { 9, 7, 6, 5 },
    { 10, 11, 12, 13 },
    { 19, 17, 16, 15 }
}, {
    // LED Index to Physical Position
    { 28, 12 }, { 84, 12 }, { 140, 12 }, { 196, 12 },
    { 196, 17 }, { 196, 28 }, { 140, 28 }, { 84, 28 },
    { 28, 17 }, { 28, 28 }, { 28, 44 }, { 84, 44 },
    { 140, 44 }, { 196, 44 }, { 196, 47 }, { 196, 60 },
    { 140, 60 }, { 84, 60 }, { 28, 47 }, { 28, 60 }
}, {
    // LED Index to Flag
    4, 4, 4, 4,
    2, 4, 4, 4,
    2, 4, 4, 4,
    4, 4, 2, 4,
    4, 4, 2, 4,
} };
#endif
