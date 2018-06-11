#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
void main()
{
  DDRB= 0xff;
  while(1)
  {
     PORTB= 0b00001111;
	 _delay_ms(1000);
	 PORTB= 0b10001110;
	 _delay_ms(1000);
	 PORTB= 0b11001100;
	 _delay_ms(1000);
	 PORTB= 0b11101000;
	 _delay_ms(1000);
	 PORTB= 0b11110000;
	 _delay_ms(1000);
	 
	 }
}
