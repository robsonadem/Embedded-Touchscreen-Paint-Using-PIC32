
#include "Button.h"

#include "tft_master.h"
#include "tft_gfx.h"

#include "TouchScreen.h"
//create color buttons and clear button
void button_init()
{

    btn1.x = 280;
    btn2.x = 280;
    btn3.x = 280;
    btn4.x = 280;
    btn5.x = 280;
    btn6.x = 280;
    clear_btn.x = 0;
    btn1.y = 0;
    btn2.y = 40;
    btn3.y = 80;
    btn4.y = 120;
    btn5.y = 160;
    btn6.y = 200;
    clear_btn.y = 0;
    btn1.w = 40;
    btn2.w = 40;
    btn3.w = 40;
    btn4.w = 40;
    btn5.w = 40;
    btn6.w = 40;
    clear_btn.w = 40;
    btn1.h = 40;
    btn2.h = 40;
    btn3.h = 40;
    btn4.h = 40;
    btn5.h = 40;
    btn6.h = 40;
    clear_btn.h = 40;
    btn1.color = ILI9341_YELLOW;//yellow
    btn2.color = ILI9341_BLUE;//blue
    btn3.color = ILI9341_CYAN;//Magenta
    btn4.color = ILI9341_RED;//red
    btn5.color = ILI9341_GREEN;//green
    btn6.color = ILI9341_PINK;//PINK
    clear_btn.color = ILI9341_WHITE;//white
    
}


void fill_button(struct button *btn)
{
    tft_fillRect(btn->x,  btn->y,  btn->w,  btn->h,  btn->color);
}

void draw_buttons()
{
    fill_button(&btn1);
    fill_button(&btn2);
    fill_button(&btn3);
    fill_button(&btn4);
    fill_button(&btn5);
    fill_button(&btn6);
    fill_button(&clear_btn);
}

int buttonPressed(struct button *btn) {
    
        if ((p.x > btn->x) && (p.x < (btn->x + btn->w)) && (p.y > btn->y)&& (p.y < (btn->y + btn->h))) {
            if(p.z >5)
            {
               return 1; 
            }
            
      
    }return 0;
    
    
    
}