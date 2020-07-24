/*
Copyright (C) 2020 Andrew Wells <andrew.wells88@gmail.com>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H

#define KEYBOARD_SIDE MASTER


#define DEVICE_NAME_M "Blue Wizard" /**< Name of device. Will be included in the advertising data. */
#define DEVICE_MODEL "Blue Wizard" /**< Name of device. Will be included in the advertising data. */
#define MANUFACTURER_NAME "awells" /**< Manufacturer. Will be passed to Device Information Service. */

/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 15
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS {12, 13, 14, 15, 16, 17, 8, 6, 7, 4, 3, 5, 23, 22, 20}
#define MATRIX_COL_PINS {24, 29, 19, 28} //pin 31 reads battery voltage by default, bodge to 28

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define KEYMAP( \ 
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13, k14, \
    k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k40, k41, k42, k43, k44, \
    k45, k46, k47, k48, k49, k50, k51, k52, k53, k54, k55, k56, k57, k58, k59 \
) {                                              \
        { k00, k15, k30, k45}, \
        { k01, k16, k31, k46}, \
        { k02, k17, k32, k47}, \
        { k03, k18, k33, k48}, \
        { k04, k19, k34, k49}, \
        { k05, k20, k35, k50}, \
        { k06, k21, k36, k51}, \
        { k07, k22, k37, k52}, \
        { k08, k23, k38, k53}, \
        { k09, k24, k39, k54}, \
        { k10, k25, k40, k55}, \
        { k11, k26, k41, k56}, \
        { k12, k27, k42, k57}, \
        { k13, k28, k43, k58}, \
        { k14, k29, k44, k59} \
}

#endif /* KEYBOARD_CONFIG_H */

    // kC0, kD0, kE0, kC1, kD1, kE1, kC2, kD2, kE2, 

        // kC3, kD3, kE3, kC4, kD4, kE4, kC5, kE5, kD5, 

                // { kC0, kC1, kC2, kC3, kC4,      kC5,      KC_NO      }, 
        // { kD0, kD1, kD2, kD3, kD4,      kD5,      KC_NO      }, 
        // { kE0, kE1, kE2, kE3, kE4,      kE5,      KC_NO      } 
//{12, 13, 14, 15, 16, 17, 8, 6, 7, 4, 3, 5} //removed 23, 22, 20
//#define MATRIX_COL_PINS {24, 29, 19, 31, 2, 30, 10}