
#include <xc.h>

#pragma config FOSC = INTIO67
#pragma config BOREN = OFF

void main(void) {
    
    TRISD = 0;
    
    while(1) {
       
        PORTD = 1;
        PORTD = 4;
        PORTD = 16;
        
       }
    
    return;
}
