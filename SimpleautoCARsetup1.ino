
#include <AFMotor.h>
#include <Servo.h>

AF_DCMotor motor(4);
#define MAX_SPEED 255
#define SERVO2_PWM9 
//#define steeringservo;
//#define steeringservo.write;
 
//Servo Servo_2;
Servo steeringservo;


void setup() {
 steeringservo.attach(9);
 steeringservo.write(90);
 steeringservo.write(0);
 steeringservo.write(100);
 motor.setSpeed(255);
 motor.run(RELEASE);
 motor.setSpeed(255);
 motor.run(FORWARD);
 motor.setSpeed(255);
 motor.run(BACKWARD);
 
}

void loop() {
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(90);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(10);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(90);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(10);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(90);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(10);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(90);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(10);
 motor.run(FORWARD);
 delay(2000);
 steeringservo.write(90);
 motor.run(RELEASE);
 delay(10000);

}
