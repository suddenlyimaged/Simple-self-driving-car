# Simple-self-driving-car
Just a simple sketch for running a 2 wd car with servo steering. 
I used a copy of the Adafruit motorshield version 1 with L293D chips and a Sparkfun Redboard UNO.
Make sure you grab the right library for the motorshield!
The chassis I used was a new bright rc truck the current draw was below the rating for the motorshield
make sure whatever you use draws less than what the shield can supply.
If your motor draws more current you can solder another set of L293D on top of the ones on the shield,
they have parallel capability and will increase the amperage it can supply!
I used a small 9 gram servo for steering, The motor shield passes the PWM through from the UNO so be 
sure you stay within the limits of the UNO for powering the servo!

Feel free to change up this code for your needs, Use it as a starting point for your car.
I made this as my first entry to Git Hub mostly because I couldn't find any code that did what I 
needed and I wanted to see how adding code to Git Hub works!

I plan on adding on to this and making it an obstacle avoiding autonomous car with a ultrasonic sensor.
