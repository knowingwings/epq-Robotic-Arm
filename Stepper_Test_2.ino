int stepPin = 10;
int dirPin = 11;
int enblPin = 12;
int Distance = 0;

void setup() {
pinMode (stepPin, OUTPUT);
pinMode (dirPin, OUTPUT);
pinMode (enblPin, OUTPUT);
digitalWrite(stepPin, LOW);
digitalWrite(dirPin, LOW);
digitalWrite(enblPin, HIGH);
}

void loop() {
for(int x=0; x<1600; x++){
digitalWrite(stepPin, HIGH);
delayMicroseconds(100);
digitalWrite(stepPin, LOW);
delayMicroseconds(100);
Distance = Distance + 1;
}

if (Distance == 6400)
{
if (digitalRead(dirPin) == LOW)
{
digitalWrite(dirPin, HIGH);
}
else
{
digitalWrite(dirPin, LOW);
}
Distance = 0;
delay(2000);
}
}
