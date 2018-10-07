#include "config.h"


void configPIC(void)
{
    
    TRISA= OUTPUT; 
    PORTA=0;// indicas que todas los  pines del puerto A son salidas. 
    TRISC=OUTPUT;
    PORTC=0;
    TRISE=OUTPUT;
    PORTE=0;
}

void putch(unsigned char data) {
    while( ! PIR1bits.TXIF)          // wait until the transmitter is ready
        continue;
    TXREG = data;                     // send one character
}

void init_uart(void) {
    TXSTAbits.TXEN = 1;               // enable transmitter
    RCSTAbits.SPEN = 1;               // enable serial port
}


