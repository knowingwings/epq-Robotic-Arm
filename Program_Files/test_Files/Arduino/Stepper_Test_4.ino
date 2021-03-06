int pulPin = 22;
int dirPin = 24;
int enblPin = 26;
int ledPin = 13;
int i =0;
int loops = 0;
bool active = false;
String command;

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
void step17_1() {
  digitalWrite(pulPin, HIGH);
  digitalWrite(ledPin, HIGH);
  digitalWrite(pulPin, LOW);
  digitalWrite(ledPin, LOW);

}
void loop(){
  while(Serial.available()){
    delay(0.1);
    command=Serial.readString();
    Serial.println(command);
    if(Serial.readString()=="start"){
      Serial.println("Starting");
      active=true;
      step17_1();
      }
    else if(Serial.readString()=="stop") {
      Serial.println("Stopping");
      active=false;
    }
    else {
      Serial.println("blank");
    }
   }
    step17_1();
    delay(0.5);
}
