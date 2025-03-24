#include<avr/io.h>
#include<math.h>
void servoattach(short int num,int value)       //value=clock frequency and num=pin no.to be attached
{
  switch(num)
  {
   case 9:                            //OC1A
      DDRB|=(1<<PB1); // PORTB as OUTPUT
      TCCR1A|=(1<<WGM11)|(1<<COM1A1)|(1<<COM1A0);  //SETTING PRESCALAR AS 64 
      TCCR1B|=(1<<WGM12)|(1<<WGM13)|(1<<CS10)|(1<<CS11); //FAST PWM MODE
      ICR1=312.5*value-1;                    //generating 20msec pulse (pwm method)
      break; 

   case 10:                            //OC1B
      DDRB|=(1<<PB2); // PORTB as OUTPUT
      TCCR1A|=(1<<WGM11)|(1<<COM1B1)|(1<<COM1B0);  //SETTING PRESCALAR AS 64 
      TCCR1B|=(1<<WGM12)|(1<<WGM13)|(1<<CS10)|(1<<CS11); //FAST PWM MODE
      ICR1=312.5*value-1;                    //generating 20msec pulse (pwm method)
      break;
    }
}



void servoPSPwrite(short int pin,int val)           //PIN=servo pin no. on mega,val=angle value for the servo at pin
{
  switch(pin)
  {
   case 9:
      val=map(val,0,200,ICR1/32,ICR1/8.6);
      OCR1A=ICR1-val;
      break;
    case 10:
      val=map(val,0,200,ICR1/32,ICR1/8.6);
      OCR1B=ICR1-val;
      break;
   }
}

void deattach(short int pin1)                   //pin1=pin no. to be deattached
{
 switch(pin1)
  {
   case 9:                            //OC1A
      DDRB|=(1<<PB1); // PORTB as OUTPUT
      TCCR1A|=(0<<WGM11)|(0<<COM1A1)|(0<<COM1A0);  //SETTING PRESCALAR AS 64 
      TCCR1B|=(0<<WGM12)|(0<<WGM13)|(0<<CS10)|(0<<CS11); //FAST PWM MODE
      ICR1=0;                    //generating 20msec pulse (pwm method)
      OCR1A=0;
      PORTB|=(0<<PB1);
      break; 

   case 10:                            //OC1B
      DDRB|=(1<<PB2); // PORTB as OUTPUT
      TCCR1A|=(0<<WGM11)|(0<<COM1B1)|(0<<COM1B0);  //SETTING PRESCALAR AS 64 
      TCCR1B|=(0<<WGM12)|(0<<WGM13)|(0<<CS10)|(0<<CS11); //FAST PWM MODE
      ICR1=0;                    //generating 20msec pulse (pwm method)
      OCR1B=0;
      PORTB|=(0<<PB2);
      break;
   }
}