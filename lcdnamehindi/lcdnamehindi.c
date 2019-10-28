#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#include<lcdavr.h>
void c1()
{
   lcd_command(0x40); //0th data

   lcd_data(0b00000000);
   lcd_data(0b00000100);
   lcd_data(0b00001110);
   lcd_data(0b00000010);
   lcd_data(0b00001100);
   lcd_data(0b00001100);
   lcd_data(0b00000011);
   lcd_data(0b00000000);


   lcd_command(0x48);  //1st data

   lcd_data(0b00000000);
   lcd_data(0b00000100);
   lcd_data(0b00000100);
   lcd_data(0b00000110);
   lcd_data(0b00010010);
   lcd_data(0b00001100);
   lcd_data(0b00000000);
   lcd_data(0b00000000);


   lcd_command(0x50);  //2nd data

   lcd_data(0b00000000);
   lcd_data(0b00011010);
   lcd_data(0b00011010);
   lcd_data(0b00001110);
   lcd_data(0b00011010);
   lcd_data(0b00001010);
   lcd_data(0b00000000);
   lcd_data(0b00000000);

   lcd_command(0x58); //3rd data

   lcd_data(0b00000000);
   lcd_data(0b00001010);
   lcd_data(0b00001010);
   lcd_data(0b00001010);
   lcd_data(0b00011110);
   lcd_data(0b00001010);
   lcd_data(0b00000000);
   lcd_data(0b00000000);
   }
int x;
void main()
{
   DDRB=0xff;
   lcd_init();
   c1();
   while(1)
   {
       lcd_clear();
	   lcd_command(0x80);
	   lcd_data(0);
	   _delay_ms(100);
	   lcd_command(0x81);
         lcd_data(1);
       _delay_ms(100);
       lcd_command(0x82);
	   lcd_data(2);
	   _delay_ms(100);
	   lcd_command(0x83);
	   lcd_data(3);
	   _delay_ms(100);
	      for(x=0;x<=5;x++)
		  {
		    lcd_command(0x1c);
			_delay_ms(100); 
			}
	   }
	   }
