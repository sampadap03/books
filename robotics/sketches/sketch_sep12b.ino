#define pwmr 8 //right motor pwm2
#define pwml 9 //left motor pwm1
#define dr 10 //direction pin right
#define dl 11 //direction pin left

#define Kp 0.5  // Kp value 
#define setPoint 35    // Middle point of sensor array
int positionVal=0;
#define baseSpeed1 50    // Base speed for your motors
#define baseSpeed2 70  
#define maxSpeed 100   // Maximum speed for your motors
int rightMotorSpeed,leftMotorSpeed,error,motorSpeed;

void setup()
{
  
  pinMode(pwmr,OUTPUT);
  pinMode(pwml,OUTPUT);
  pinMode(dr,OUTPUT);
  pinMode(dl,OUTPUT);
  // Setting initial condition of serialEn pin to HIGH
  Serial1.begin(9600);
  
  digitalWrite(dr,1);
  digitalWrite(dl,1);
}

void loop() {
  if(Serial1.available()>0)
  {
positionVal=Serial1.read();

  
  if(positionVal == 255)
  {  
    analogWrite(pwmr,0);
    analogWrite(pwml,0);
  }

  else {
    motors on();  
  }
  if(0<positionVal=<30)
  {while(positionVal!=255)
    {analogWrite(pwm1,50);
    }
    rightMotorSpeed = baseSpeed2 +motorSpeed;
    leftMotorSpeed = baseSpeed1 - motorSpeed;
    }
  
  
  }

void motors on()
{
  error = positionVal - setPoint;   // Calculate the deviation from position to the set point
     motorSpeed = Kp * error;   // Applying formula of PID
     
    // Adjust the motor speed based on calculated value
    // You might need to interchange the + and - sign if your robot move in opposite direction
    rightMotorSpeed = baseSpeed2 - motorSpeed;
    leftMotorSpeed = baseSpeed1 + motorSpeed;

    // If the speed of motor exceed max speed, set the speed to max speed
    if(rightMotorSpeed >=maxSpeed) rightMotorSpeed = maxSpeed;
    if(leftMotorSpeed >=maxSpeed) leftMotorSpeed = maxSpeed;

    // If the speed of motor is negative, set it to 0
    if(rightMotorSpeed <= 0) rightMotorSpeed = 0;
    if(leftMotorSpeed <= 0) leftMotorSpeed = 0;

    analogWrite(pwmr,rightMotorSpeed);
    analogWrite(pwml,leftMotorSpeed);
  }
  
}
   
