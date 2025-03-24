/*
 * LSA v1.0.c
 *
 * Created: 13-10-2018 12:47:12
 * Author : HP15-BR011TX
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL



int main(void)
{
    /* Replace with your application code */
	DDRB = 0b11111111;
	DDRD = 0b00000000;
	
    while (1) 
    {
		if(PIND0 == 1 && PIND1 == 1)
		{
			//go left
			PORTB = 0b11000000;
		}
		else if(PIND2 == 1 || (PIND3 == 1 && PIND4 == 1) || PIND5 == 1)
		{
			// go straight
			PORTB = 0b00111100;
			
		}
		else if(PIND6 == 1 && PIND7 == 1)
		{
			//go right
			PORTB = 0b00000011;
		}
		
    }
}

