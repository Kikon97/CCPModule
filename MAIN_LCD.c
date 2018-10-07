#pragma config PLLDIV = 1       // PLL Prescaler Selection bits (No prescale (4 MHz oscillator input drives PLL directly))
#pragma config CPUDIV = OSC1_PLL2// System Clock Postscaler Selection bits ([Primary Oscillator Src: /2][96 MHz PLL Src: /3])


// CONFIG1H
#pragma config FOSC = HSPLL_HS  // Oscillator Selection bits (HS oscillator, PLL enabled (HSPLL))
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)


// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))

// CONFIG3H
#pragma config MCLRE = ON       // MCLR Pin Enable bit (MCLR pin enabled; RE3 input pin disabled)

// CONFIG4L
#pragma config LVP = OFF        // Single-Supply ICSP Enable bit (Single-Supply ICSP disabled)


// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot block (000000-0007FFh) is not code-protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM is not code-protected)

#include "config.h"
#include "LCD.h"

void main (void){
   
    configPIC();
    iniLCD();
    
        print_LCD("Frecuencia: ");
        Return_home();
        for(int i=0;i<200;i++){
        __delay_ms(2);
        Cursor_or_display_shift(0,1);
        }
        print_LCD("DutyCicle: ");
// LCD_data ('H'); 
// LCD_data ('e'); 
// LCD_data ('l'); 
// LCD_data ('l'); 
// LCD_data ('o');
//LCD_data (' '); 
//LCD_data ('W'); 
//  LCD_data ('o'); 
// LCD_data ('r'); 
// LCD_data ('l'); 
// LCD_data ('d'); 
// LCD_data (' ');
//LCD_data (':'); 
//LCD_data (')'); 
       
    while (1){
        

        
    }

    
}

//
//void cursos_desplaszandose (void){
//        for (int i=0; i<16; i++){
//        Cursor_or_display_shift (0,1);
//        __delay_ms (500);
//        }
//        for (int i=0; i<16; i++){
//        Cursor_or_display_shift (0,0);
//        __delay_ms (500);
//        }
//
//
//}