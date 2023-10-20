
void setup() {

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}

void posljiPodatek(char podatek){

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);

  for(int i = 0; i < 8; i++){
    
  }

}

// the loop function runs over and over again forever
void loop() {
 
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
 //1
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //2
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //3
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //4
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //5
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //6
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //7
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //8
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(11, HIGH);
  digitalWrite(11, LOW);
  
  delay(500);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
 //1
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //2
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //3
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //4
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //5
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //6
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //7
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);
 //8
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(11, HIGH);
  digitalWrite(11, LOW);
  
  delay(500);


}
