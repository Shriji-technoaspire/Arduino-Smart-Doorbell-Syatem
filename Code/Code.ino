int trigPin = 10;    
int echoPin = 9;    
int bell=6;
 
void setup() {
  digitalWrite(bell, LOW);
  pinMode(trigPin, OUTPUT);
  pinMode(bell,OUTPUT);
  pinMode(echoPin, INPUT);
  delay(100);
}
 
void loop() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  int duration = pulseIn(echoPin, HIGH);
  delay(50);
  
  if (duration <= 600){
     digitalWrite(bell, HIGH);

  }

  else{
      digitalWrite(bell, LOW);

    
  }
}
