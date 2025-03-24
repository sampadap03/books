#include <avr/io.h>
#include <avr/interrupt.h>


volatile int x, y;
int setpoint = 35;
float motorSpeed = 0;
float Kp = 0.45, Kd = 0;
float pwm1 = 0, pwm2 = 0, pwm3 = 0;

#define m1pwm 10
#define m1dir 9
#define m2pwm 12
#define m2dir 11
#define m3pwm 7
#define m3dir 8

/*void USART_Init3(unsigned int baud)
{
  // set baud rate
  UBRR3H = (unsigned char)(baud >> 8);
  UBRR3L = (unsigned char) baud;
  // enable reciever and transmitter
  UCSR3B = (1 << TXEN3) | (1 << RXEN3);
  // set frame format: 8data, 2 stop bit
  UCSR3C = (1 << USBS3) | (3 << UCSZ30);

}*/
void USART_Init1(unsigned int baud)
{
  // set baud rate
  UBRR1H = (unsigned char)(baud >> 8);
  UBRR1L = (unsigned char) baud;
  // enable reciever and transmitter
  UCSR1B = (1 << TXEN1) | (1 << RXEN1);
  // set frame format: 8data, 2 stop bit
  UCSR1C = (1 << USBS1) | (3 << UCSZ10);

}

unsigned char USART_RECIEVE1(void)
{
  //wait for data to be recieved
  while (!(UCSR1A & (1 << RXC1)))
    ;
  //get and recieve data from buffer
  return UDR1;
}
/*unsigned char USART_RECIEVE3(void)
{

  //wait for data to be recieved
  while (!(UCSR3A & (1 << RXC3)));
  //get and recieve data from buffer
  return UDR3;

}*/

void setup() {
  Serial.begin(9600);
  Serial3.begin(9600);
  Serial2.begin(9600);
  pinMode(m1pwm, OUTPUT);
  pinMode(m2pwm, OUTPUT);
  pinMode(m3pwm, OUTPUT);
  pinMode(m1dir, OUTPUT);
  pinMode(m2dir, OUTPUT);
  pinMode(m3dir, OUTPUT);

  digitalWrite(m1dir, LOW);
  digitalWrite(m2dir, LOW);
  digitalWrite(m3dir, LOW);
  analogWrite(m1pwm, 0);
  analogWrite(m2pwm, 0);
  analogWrite(m3pwm, 0);
}
void loop() {

  x = USART_RECIEVE1();
 // y = USART_RECIEVE3();

 /* int error = y - setpoint;   // Calculate the deviation from position to the set point
  if (error > 15)
  {
    error = 15;
  }
  if (error < -15)
  {
    error = -15;
  }
  motorSpeed = Kp * error;
  pwm2 = 35 - motorSpeed;
  pwm1 = 35 + motorSpeed;
  pwm2 = constrain(pwm2, 20, 80);
  pwm1 = constrain(pwm1, 20, 80);

  if (y == 255)
  {
    pwm2 = 0;
    pwm1 = 0;
    pwm3 = 0;
    analogWrite(m2pwm, pwm2);
    analogWrite(m3pwm, pwm3);
    analogWrite(m3pwm, pwm1);
  }
  digitalWrite(m1dir, LOW);
  digitalWrite(m2dir, HIGH);
  analogWrite(m1pwm, pwm1);
  analogWrite(m2pwm, pwm2 );
  analogWrite(m3pwm, pwm3);*/

  Serial.print("   x= ");
  Serial.print(x);
 /* Serial.print("   y= ");
  Serial.print(y);
  Serial.print("   pwm2= ");
  Serial.print(pwm2);
  Serial.print("   pwm1= ");
  Serial.print(pwm1);
  Serial.print("   pwm3= ");
  Serial.print(pwm3);
  Serial.print("  error");
  Serial.print(error);
  Serial.print("  motorSpeed");
  Serial.print(motorSpeed);
  Serial.println();*/

}

