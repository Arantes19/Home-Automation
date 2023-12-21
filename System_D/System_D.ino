#include <IRremote.hpp>
#include <Servo.h>

Servo MS;
int IR = 8;
int LED = 7;
int led_case[] = {0, 0, 0};

int button = 0;
int mapCodeToButton ( unsigned long code ) {
  if (( code & 0x0000FFFF ) == 0x0000BF00 ) {
  	code >>= 16;
  	if ((( code >> 8) ^ ( code & 0x00FF ) ) == 0x00FF ) {
		return code & 0xFF ;
  	}
  }
  return -1;
}

int readInfrared() {
	int result = -1;
	if (IrReceiver.decode()) {
		unsigned long code = IrReceiver.decodedIRData.decodedRawData;
		result = mapCodeToButton(code);
		IrReceiver.resume();
	}
	return result ;
}

void setup()
{
  Serial.begin(9600);
  	IrReceiver.begin(IR);
  pinMode(LED, OUTPUT);
  MS.attach(9);
}

void loop()
{
  int val;
  button = readInfrared();
  if(button == -1) return;
  switch(button)
  {
    case 16:
      if(led_case[1] == 1)
      {
        val = map(1023, 0, 1023, 0, 90);
        MS.write(val);
        led_case[1] = 0;
      }
      else
      {
        val = map(0, 0, 1023, 0, 90);
        MS.write(val);
        led_case[1] = 1;
      }
      break;
    case 17:
      if(led_case[2] == 1)
      {
        digitalWrite(LED, LOW);
        led_case[2] = 0;
      }
      else
      {
        digitalWrite(LED, HIGH);
        led_case[2] = 1;
      }
      break;
  }
  Serial.print("Botao: ");
  Serial.print(led_case[1]);
  Serial.print("| LED: ");
  Serial.println(led_case[2]);
  delay(10);
}