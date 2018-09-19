
#include "Display.h"


uint16_t current_color=0xFFFF;
int pen_state=0;
void draw() {
    if (draw_region_check()==1 && (p.z>5)) 
    {
        
        tft_fillCircle(p.x, p.y, 5, current_color);
    }
    
    
  
        color_select();
        clear_screen();
  


}

void color_select() {
  
        if(buttonPressed(&btn1)){
            current_color=btn1.color;
            
        }
        if(buttonPressed(&btn2)){
            current_color=btn2.color;
            
        }
        if(buttonPressed(&btn3)){
            current_color=btn3.color;
            
        }
        if(buttonPressed(&btn4)){
            current_color=btn4.color;
            
        }
        if(buttonPressed(&btn5)){
            current_color=btn5.color;
            
        }
        if(buttonPressed(&btn6)){
            current_color=btn6.color;
            
        }
         
    
}





void TS_init()
{
    p.x = 0;    
    p.y = 0;
    p.z = 0;
    getPoint(&p); 
}
//Function that converts the touch screen coordinate to the pixel coordinate of 320x240
void map(struct TSPoint *p)
{       
        
        
        uint16_t xmin=140;
        uint16_t xmax= 900;
        uint16_t ymin=910;
        uint16_t ymax=110;
        uint16_t newXmin=0;
        uint16_t newXmax= 240;
        uint16_t newYmin=0;
        uint16_t newYmax= 320;
        int16_t newXt = ((int32_t)(p->x-xmin)*(int32_t)(newXmax-newXmin)/(int32_t)(xmax-xmin))+(int32_t)(newXmin);
        int16_t newYt = ((int32_t)(p->y-ymin)*(int32_t)(newYmax-newYmin)/(int32_t)(ymax-ymin))+(int32_t)(newYmin);
        if(newXt <0 )
        {
            newXt=0;
        }
        if(newYt <0)
        {
            newYt=0;
        }
        if(newXt >240 )
        {
            newXt=240;
        }
        if(newYt >320)
        {
            newYt=320;
        }
        
        uint16_t newX = newYt;
        uint16_t newY = newXt;   
        
        p->x =newX;
        p->y =newY;
        
        
}

//screen initial
void screen_init()
{
    SYSTEMConfigPerformance(PBCLK);
    
    configureADC();
    //initialize screen
    tft_init_hw();
    tft_begin();
    tft_setRotation(3); 
    tft_fillScreen(ILI9341_BLACK);  
    
    
}

void clear_screen()
{
    if(buttonPressed(&clear_btn))
    {
    tft_fillScreen(ILI9341_BLACK); 
    draw_buttons();
    }
    
}

int draw_region_check() {
   
        if ((p.x < 40 && p.y < 40) || (p.x > 280)) {
            pen_state = 0;
        } 
        else pen_state = 1;
    
    
}