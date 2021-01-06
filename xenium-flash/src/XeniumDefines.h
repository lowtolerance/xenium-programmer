/* #defines for Xenium JTAG and FLASH GPIO pinouts

Copyright (C) 2019-2020 Koos du Preez (kdupreez@hotmail.com)

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

// BITBUS TO XENIUM PIN MAP
// ------------------------
// BITBUS D0 => LPC LAD0
// BITBUS D1 => LPC LAD1
// BITBUS D2 => LPC LAD2
// BITBUS D3 => LPC LAD3
// BITBUS CLK => LPC LCLK
// BITBUS DIR => LPC RST

// default is PI build
#ifndef OMEGA2
    // JTAG Pins
    #define XENIUM_TMS 4
    #define XENIUM_TCK 17
    #define XENIUM_TDI 22
    #define XENIUM_TDO 27

    // BitBus pins connected to LPC Header
    #define BITBUS_D0 16
    #define BITBUS_D1 21
    #define BITBUS_D2 18
    #define BITBUS_D3 20
    #define BITBUS_CLK 24
    #define BITBUS_DIR 23

#else
    // JTAG Pins
    #define XENIUM_TMS 11
    #define XENIUM_TCK 3
    #define XENIUM_TDI 2
    #define XENIUM_TDO 17

    // BitBus pins connected to LPC Header
    #define BITBUS_D0 16
    #define BITBUS_D1 21
    #define BITBUS_D2 18
    #define BITBUS_D3 20
    #define BITBUS_CLK 24
    #define BITBUS_DIR 23
#endif

