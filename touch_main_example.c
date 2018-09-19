/* 
 * File:   touch_main.c
 * Author: watkinma
 *
 * Description: Prints out the detected position (x, y) of a press on the
 * touchscreen as well as the pressure (z).
 * 
 * IMPORTANT: For this example to work, you need to make the following 
 * connections from the touchpad to the PIC32:
 *  Y+ => AN1 (Pin 3)
 *  Y- => RA3 (Pin 10)
 *  X+ => RA4 (Pin 12)
 *  X- => AN0 (Pin 2)
 * 
 */

#include "config.h"
#include "plib.h"
#include "xc.h"
#include "adc_intf.h"
#include "TouchScreen.h"
#include "tft_master.h"
#include "tft_gfx.h"
#include "Button.h"
#include "Display.h"

#define XM AN0
#define YP AN1


/*
 * 
 */
int main(int argc, char** argv) {
    char buffer[30];

    screen_init();
        
    while (1) {
        TS_init();
        map(&p);
        button_init();
        draw_buttons();
        
//        color=color_select();
//        current_color=color;
        draw();

    }

    return (EXIT_SUCCESS);
}






