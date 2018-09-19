/* 
 * File:   Button.h
 * Author: zhuti
 *
 * Created on September 8, 2018, 4:24 PM
 */

#ifndef BUTTON_H
#define	BUTTON_H
#include <p32xxxx.h>
#include <inttypes.h>
#include "Display.h"



struct button
{
    uint16_t x, y, w, h;
    uint16_t color;
};

struct button btn1, btn2, btn3,btn4,btn5,btn6,clear_btn;


void button_init();
void fill_button(struct button *btn);
void draw_buttons();
int buttonPressed(struct button *btn);
#endif	/* BUTTON_H */

