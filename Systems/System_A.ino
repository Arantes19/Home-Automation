#define LED 11
#define LDR A0

int initval;
int val;
int ledIntensity;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  initval = analogRead(LDR);
  Serial.print(initval);
}

void loop() {
  val = analogRead(LDR);
  Serial.print("val: ");
  Serial.print(val);

  if (val >= 800) {
    ledIntensity = 255;
  } else if (val >= 600 && val < 800) {
    ledIntensity = 192;
  } else if (val >= 400 && val < 600) {
    ledIntensity = 128;
  } else if (val >= 200 && val < 400) {
    ledIntensity = 64;
  } else if (val < 200) {
    ledIntensity = 0;
  }

  analogWrite(LED, ledIntensity); // Set the LED intensity
  Serial.print(" LED: ");
  Serial.println(ledIntensity); // Print the LED intensity value

  delay(500);
}
