/*
    Front:0
    Right:3
    Back:6
    Left:9
    stop: 
    Bot-clockwise:C
    Bot-anticlockwise:A
    PWM +5:D
    PWM -5:E

 */
#define EN1 6
#define EN2 7
#define EN3 8
#define IN1 47
#define IN2 48
#define IN3 49
int PWM1;
int PWM2;
int PWM3;
double pwm1;
double pwm2;
double pwm3;
int base_pwm=150;
int fpwm=base_pwm;

void setup() {
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(EN3,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  
  Serial.begin(9600);
  
  

}

void forward()
{
  pwm1=0;
  pwm2=(fpwm/1.73205081);
  pwm3=(fpwm/1.73205081);

  PWM1=(int)pwm1;
  PWM2=(int)pwm2;
  PWM3=(int)pwm3;
  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  analogWrite(EN1,PWM1);
  analogWrite(EN2,PWM2);
  analogWrite(EN3,PWM3);
}
void backward()
{
  pwm1=0;
  pwm2=(fpwm/1.73205081);
  pwm3=(fpwm/1.73205081);

  PWM1=(int)pwm1;
  PWM2=(int)pwm2;
  PWM3=(int)pwm3;
  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  analogWrite(EN1,PWM1);
  analogWrite(EN2,PWM2);
  analogWrite(EN3,PWM3);
  
  
}
void right()
{
  pwm1=(2*fpwm/3);
  pwm2=(fpwm/3);
  pwm3=(fpwm/3);

  PWM1=(int)pwm1;
  PWM2=(int)pwm2;
  PWM3=(int)pwm3;
  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  analogWrite(EN1,PWM1);
  analogWrite(EN2,PWM2);
  analogWrite(EN3,PWM3);
  
}
void left()
{
  pwm1=(2*fpwm/3);
  pwm2=(fpwm/3);
  pwm3=(fpwm/3);

  PWM1=(int)pwm1;
  PWM2=(int)pwm2;
  PWM3=(int)pwm3;
  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  analogWrite(EN1,PWM1);
  analogWrite(EN2,PWM2);
  analogWrite(EN3,PWM3);
  
}
void clkwise()
{
  pwm1=fpwm;
  pwm2=fpwm;
  pwm3=fpwm;

  PWM1=(int)pwm1;
  PWM2=(int)pwm2;
  PWM3=(int)pwm3;
  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  analogWrite(EN1,PWM1);
  analogWrite(EN2,PWM2);
  analogWrite(EN3,PWM3);
  
}
void anticlkwise()
{
  pwm1=fpwm;
  pwm2=fpwm;
  pwm3=fpwm;

  PWM1=(int)pwm1;
  PWM2=(int)pwm2;
  PWM3=(int)pwm3;
  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  analogWrite(EN1,PWM1);
  analogWrite(EN2,PWM2);
  analogWrite(EN3,PWM3);
  
}

void sTop()
{
  pwm1=0;
  pwm2=0;
  pwm3=0;

  PWM1=(int)pwm1;
  PWM2=(int)pwm2;
  PWM3=(int)pwm3;
  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  analogWrite(EN1,PWM1);
  analogWrite(EN2,PWM2);
  analogWrite(EN3,PWM3);
  
}


void loop() {

  
  
  char X;

  if(Serial.available())
  {
    X=Serial.read();
    switch(X)
    {
      case '0':
      {// Forward

          forward();
        
       }break;
       case '3':
      {//Right

        right();
        
       }break;
       case '6':
      {//Backwards

        backward();
        
       }break;
       case '9':
      {//Left

        left();
        
       }break;
       case 'C':
      {//Turn Bot Clockwise

         clkwise();
         
       }break;
       case 'A':
      {//Turn Bot Anti-Clockwise

        anticlkwise();
        
       }break;
       case 'D':
      {//Increment PWM by 5
        if(fpwm<=255)
        {
          fpwm=fpwm+5;
        }
        
       }break;
       case 'E':
      {//Decrement PWM by 5
        if(fpwm>=0)
        {
          fpwm=fpwm-5;
        }
       } break;
    
      case 'S':
      {
        sTop();
      }
      
    }
  }
  

}
