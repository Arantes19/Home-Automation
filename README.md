# Home-Automation

## System A - Interior Lighting Control
Develop a system to control the brightness of the interior space, where the lighting will be adjusted based on the intensity of sunlight, ensuring constant illumination and greater energy efficiency.  <br /> 
Consider the following 5 light intensity scales:
> $\geq$ 800 LED 255;
> 
> $\geq$ 600 e < 800 LED 192
> 
> $\geq$ 400 e < 600 LED 128
> 
> $\geq$ 200 e < 400 LED 64
>
> $\lt$ 200 LED 0

Use LED and LDR sensor to simulate the system. <br /> 
Display the sensor input value and LED output on the serial monitor.

## System B - Climate Control
Develop a system to control ambient temperature through ventilation, where a fan is activated to cool the space based on temperature values provided by a sensor.
> Turn on the fan whenever the temperature exceeds 24 degrees Celsius.
>
> Turn off the fan whenever the temperature is below 20 degrees Celsius.
>
> It should also indicate environmental control through 2 LEDs:
> 
>> Red LED turns on when cooling;
>> 
>> Green LED turns on when stabilized.
>
> The fan status ("Fan ON / Fan OFF") should be displayed on the 1st line of an LCD display and the current temperature ("Temp: xxxºC") on the 2nd line.
>
> Control the display brightness with a potentiometer.

## System C - Security System (Alarm)
Develop a security system for detecting intrusions through intruder movement control.  <br /> 
Whenever the PIR sensor detects movement, it should activate:
> A flashing red light signal (LED).
> 
> A characteristic alarm sound signal lasting 10 seconds.
> 
> Consider a button (press) to disarm the alarm.
>
> The alarm should repeat the sound signal (10 seconds), with 5-second intervals until disarmed by the button.

## System D
Develop an additional embedded system for integration into Smart Housing, to automate any other task you find useful (Parking, irrigation, access, etc.). <br /> 
It should use at least 3 distinct components among sensors and actuators, as well as monitoring on the serial monitor.

### Additionally, include one of the following requirements in each of the 4 developed systems, chosen by each group:
>
> Use of Interrupts in one of the developed systems.
>
> Creation of a graphical interface for real-time remote monitoring of one of the developed systems.
>
> Multitasking (with Timer or RTOS), e.g., concurrently managing the execution time of 2 or more components of one of the systems.
>
> Analyze the program's performance through the program path, using reference flags and the timer on the serial monitor. This analysis should be done considering 2 versions of the program of one of the systems to conclude which one is more energy efficient.

