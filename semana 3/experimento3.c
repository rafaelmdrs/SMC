#include <xc.h>

#pragma config FOSC = INTIO67
#pragma config BOREN = OFF
#define _XTAL_FREQ 1000000

void main(void) {
    
    TRISD = 0;
   
            while(1) {
                
                PORTDbits.RD3 = 1;
                __delay_ms(3000);
                PORTDbits.RD3 = 0;
                
                PORTDbits.RD4 = 1;
                __delay_ms(1000);
                PORTDbits.RD4 = 0;
                
                PORTDbits.RD5 = 1;
                __delay_ms(2000);
                PORTDbits.RD5 = 0;
            }
    
    return;
    
}