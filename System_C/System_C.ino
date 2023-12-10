int button = 4;
int ledPin = 12;
int piezoBuzzerPin = 10;
int pirSensorPin = 2;
float sinVal;
int toneVal;
int motionDetected = LOW;
int val = 0;
int alarmArmed = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirSensorPin, INPUT);
  pinMode(piezoBuzzerPin, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  delay(5000);
}

void loop() {
  val = digitalRead(button);
  motionDetected = digitalRead(pirSensorPin);

  if (motionDetected == HIGH || alarmArmed == 1) {
    alarmArmed = 1;
    Serial.println("Motion detected!!");
    for (int i = 0; i < 10; i++) {
      if(digitalRead(button) == LOW){
      digitalWrite(ledPin, HIGH);
      tone(piezoBuzzerPin, 100);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500);
      } else alarmArmed = 0;
    }
    if(alarmArmed == 1){
    noTone(piezoBuzzerPin);
    delay(5000);
    }
  } else if (val == HIGH) {
    Serial.println("Disarming the alarm!");
    digitalWrite(ledPin, LOW);
    noTone(piezoBuzzerPin);
    delay(200);
  } else {
    Serial.println("No motion!");
    delay(200);
  }
}
