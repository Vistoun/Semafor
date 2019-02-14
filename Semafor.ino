
int cervena= 7;
int zluta= 6;
int zelena= 5;
int btn= 4;

void setup() {
pinMode(cervena, OUTPUT);
pinMode(zluta, OUTPUT);
pinMode(zelena, OUTPUT);
pinMode(btn, INPUT);
  
}

void loop() {
  if(digitalRead(btn) == HIGH){
     digitalWrite(zelena, LOW);
     digitalWrite(zluta, LOW);
     digitalWrite(cervena, HIGH);
     delay(10000);
     digitalWrite(cervena, HIGH);
     digitalWrite(zluta, HIGH);
     digitalWrite(zelena, LOW);
     delay(1500);
     digitalWrite(zelena, HIGH);
     digitalWrite(cervena, LOW);
     digitalWrite(zluta, LOW);
     delay(5000);
     digitalWrite(cervena, LOW);
     digitalWrite(zelena, HIGH);
     digitalWrite(zluta, HIGH);
     delay(1500);
     digitalWrite(cervena, HIGH);
     digitalWrite(zluta, LOW);
     digitalWrite(zelena, LOW);
    }
   else{
      digitalWrite(cervena, LOW);
      digitalWrite(zluta, LOW);
      digitalWrite(zelena, LOW);
     }
}
