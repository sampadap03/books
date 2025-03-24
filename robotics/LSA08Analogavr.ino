#include <avr/io.h>
#include <avr/interrupt.h>
 
//uint8_t count = 0;               // global counter
 
// initialize timer, interrupt and variable
void forward_pwm()
{PORTD |= (0b00111100);
    TCCR0A = (1<<WGM01)|(1<<WGM00)|(1<<COM0B0)|(1<<COM0A0);// set up timerX with suitable prescaler and CTC mode
    TCCR0B =  (1<<CS00);// initialize counter
    TCNT0 = 0;
  OCR0A = 123;
  OCR0B= 123; // initialize compare value
      
  //TIMSK0 = (1<<OCIE0A)|(1<<OCIE0B);// enable compare interrupt
  sei();
}
  
  void left()
{   PORTD |=(0b11000000);
    TCCR0A = (1<<WGM01)|(1<<WGM00)|(1<<COM0B0)|(1<<COM0A0);// set up timerX with suitable prescaler and CTC mode
    TCCR0B =  (1<<CS00);// initialize counter
    TCNT0 = 0;
  OCR0A = 64;
  OCR0B= 123; // initialize compare value
      
  //TIMSK0 = (1<<OCIE0A)|(1<<OCIE0B);// enable compare interrupt
  sei();
}

void right()
{   PORTD |=(0b00000011);
 TCCR0A = (1<<WGM01)|(1<<WGM00)|(1<<COM0B0)|(1<<COM0A0);// set up timerX with suitable prescaler and CTC mode
    TCCR0B =  (1<<CS00);// initialize counter
    TCNT0 = 0;
  OCR0A = 123;
  OCR0B= 64;// initialize compare value
      
//  TIMSK0 = (1<<OCIE0A)|(1<<OCIE0B);// enable compare interrupt
  sei();
}

int main(void)
{
    PINC|= 0b11111111;
    if((PINC|=0b11000000))
  {
    left();
  }

    //INB |= 0b11111111;
    if((PINC|=0b00111100))
  {
    forward_pwm();
  }
  
  //INB |= 0b11111111;
    if((PINC|= 0b00000011))
  {
    right();
  }
  
}
