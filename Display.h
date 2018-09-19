/* 
 * File:   Display.h
 * Author: zhuti
 *
 * Created on September 8, 2018, 5:33 PM
 */

#ifndef DISPLAY_H
#define	DISPLAY_H
#include <p32xxxx.h>
#include <inttypes.h>

#include "plib.h"
#include "xc.h"
#include "adc_intf.h"
#include "Button.h"
#include "TouchScreen.h"
#include "tft_master.h"
#include "tft_gfx.h"

struct TSPoint p;
void TS_init();
void draw();
void color_select();
void screen_init();
void map(struct TSPoint *p);
void clear_screen();

#endif	/* DISPLAY_H */

