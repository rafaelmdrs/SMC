#pragma config FOSC = INTIO67
#pragma config PBADEN = OFF

#include <xc.h>

void main(void) {
    TRISD &= 0b11111100; 
    TRISB |= 0b00000001; 
   
    while(1) 
    { 
        PORTD &= 0b11111100;        
        if ((PORTB && 0b00000001) == 0){ 
            PORTD |= 0b00000001;       
        } else{                     
            PORTD |= 0b00000010;      
        }
    } 
    return;
}