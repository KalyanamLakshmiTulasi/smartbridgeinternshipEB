/*
 * LEDBUTTON.c
 *
 * Created: 10-05-2019 11:30:18
 * Author : SUNDARI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRC |=(1<<PC0);
	 DDRD &=~(1<<PD0);
	
    while (1) 
    {
		if ((PIND & (1<<PD0))==0)
		{
			PORTC |=(1<<PC0);
			_delay_ms(100);
			PORTC &=~(1<<PC0);
		}
    }
}
