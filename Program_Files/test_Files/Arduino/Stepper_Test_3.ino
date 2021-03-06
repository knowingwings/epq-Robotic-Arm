int pulPin = 10;
int dirPin = 11;
int enblPin = 12;
int ledPin = 13;

int loops = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pulPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enblPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(pulPin, LOW);
  digitalWrite(ledPin, LOW);
  digitalWrite(enblPin, LOW);
  digitalWrite(dirPin, LOW);

  Serial.begin(9600);
  Serial.println("init");

  digitalWrite(enblPin, HIGH);
  delay(100);
  digitalWrite(enblPin, LOW);
}
void stepper17_1() {
  digitalWrite(pulPin, HIGH);
  digitalWrite(ledPin, HIGH);
  digitalWrite(pulPin, LOW);
  digitalWrite(ledPin, LOW);

}
void loop() {
  // put your main code here, to run repeatedly: 
  stepper17_1();
  delay(0.5);
}
