#include <xc.h>

#pragma config FOSC = INTIO67
#pragma config BOREN = OFF
#define _XTAL_FREQ 1000000

void main(void) {
    
    TRISD = 0;
   
            while(1) {
                
                PORTDbits.RD0 = 1;
                PORTDbits.RD7 = 1;
                __delay_ms(3000);
                
                PORTDbits.RD0 = 0;
                PORTDbits.RD1 = 1;
                __delay_ms(1000);

                PORTDbits.RD1 = 0;
                PORTDbits.RD7 = 0;
                PORTDbits.RD2 = 1;
                PORTDbits.RD5 = 1;
                __delay_ms(3000);
                
                PORTDbits.RD5 = 0;
                PORTDbits.RD6 = 1;
                __delay_ms(1000);
                
                PORTDbits.RD6 = 0;
                PORTDbits.RD2 = 0;

            }
    
    return;
    
}