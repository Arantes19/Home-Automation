#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,6,4,5,2);

float tempC;
int tempPin = A1;
int fan = 3;
int led1 = 8;
int led2 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Fan: ");
  lcd.setCursor (0, 1); 
  lcd.print ("TempC: "); 
  Serial.begin(9600);
}

void loop(){
  tempC = analogRead(tempPin);
  tempC = (tempC * 5 * 100.0)/1024.0; 
	
  // print result to lcd display
  if(tempC > 24) 
  {
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    analogWrite(fan, 255);
    lcd.setCursor(6,0);
    lcd.print("ON");
    Serial.print("Fan: ");
  	Serial.println("ON");
  
  	lcd.setCursor (6, 1);
  	lcd.print (tempC, 1);
  	lcd.print ("C");
  	Serial.print ("TempC: ");
  	Serial.print (tempC);
	delay (500);
  } else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    analogWrite(fan, 0);
    lcd.setCursor(6,0);
    lcd.print("OFF");
    Serial.print("Fan: ");
  	Serial.println("OFF");
  
  	lcd.setCursor (6, 1);
  	lcd.print (tempC, 1);
  	lcd.print ("C");
  	Serial.print ("TempC: ");
  	Serial.print (tempC);
	delay (500);
  }
}
