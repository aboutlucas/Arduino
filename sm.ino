// Sensor Magnetico

int SM1 = 0; // sensor rua 1
int SM2 = 1; // sensor rua 2

int vermtran1 =2;
int verdtran1 =3;
int amartran1 =4;
int vermtran2 =5;
int verdtran2 =6;
int amartran2 =7;
int vermped1 =8;
int verdped1 =9;
int vermped2 =10;
int verdped2 =11;

void setup() {
  pinMode(SM1, INPUT);  
  pinMode(SM2, INPUT);  
  pinMode(vermtran1, OUTPUT);
  pinMode(verdtran1, OUTPUT);
  pinMode(amartran1, OUTPUT);
  pinMode(vermtran2, OUTPUT);
  pinMode(verdtran2, OUTPUT);
  pinMode(amartran2, OUTPUT);
  pinMode(vermped1, OUTPUT);
  pinMode(verdped1, OUTPUT);
  pinMode(vermped2, OUTPUT);
  pinMode(verdped2, OUTPUT);  
}

void loop() {
   
  if(digitalRead(SM1)){
    /* fechado para transito da rua 1, aberto para 
      pedestre da rua 1, aberto para transito da
      rua 2, fechado para pedestre da rua 2. */ 
   
     digitalWrite(vermtran1, 1);
     digitalWrite(verdtran2, 1);
     digitalWrite(vermped2, 1);
     digitalWrite(verdped1, 1);
     digitalWrite(vermtran2, 0);
     digitalWrite(verdtran1, 0);
     digitalWrite(vermped1, 0);
     digitalWrite(verdped2, 0);
     digitalWrite(amartran1, 0);
     digitalWrite(amartran2, 0);
     delay(20000);
  }
  // amarelo da rua 2, mãozinha de pedestre da rua 1.
  
  digitalWrite(amartran2, 1);
  digitalWrite(verdtran2, 0);
  digitalWrite(verdped1, 0);
  digitalWrite(vermped1, 1);
  delay(1000);
  digitalWrite(vermped1, 0);
  delay(1000);
  digitalWrite(vermped1, 1);
  delay(1000);
  digitalWrite(vermped1, 0);
  delay(1000);
  digitalWrite(vermped1, 1);
  delay(1000);
  digitalWrite(vermped1, 0);
  delay(1000);
  digitalWrite(vermped1, 1);
  delay(1000);
  digitalWrite(vermped1, 0);
  delay(1000);
  
  /* aberto para transito da rua 1, fechado para 
   pedestre da rua 1, fechado para transito da
   rua 2, aberto para pedestre da rua 2. */
   
  digitalWrite(vermtran1, 0);
  digitalWrite(verdtran2, 0);
  digitalWrite(vermped2, 0);
  digitalWrite(verdped1, 0);
  digitalWrite(vermtran2, 1);
  digitalWrite(verdtran1, 1);
  digitalWrite(vermped1, 1);
  digitalWrite(verdped2, 1);
  digitalWrite(amartran1, 0);
  digitalWrite(amartran2, 0);
  delay(20000);
  
  // amarelo da rua 1, mãozinha de pedestre da rua 2.
  if(digitalRead(SM2)){
     digitalWrite(amartran1, 1);
     digitalWrite(verdtran1, 0);
     digitalWrite(verdped2, 0);
     digitalWrite(vermped2, 1);
     delay(1000);
     digitalWrite(vermped2, 0);
     delay(1000);
     digitalWrite(vermped2, 1);
     delay(1000);
     digitalWrite(vermped2, 0);
     delay(1000);
     digitalWrite(vermped2, 1);
     delay(1000);
     digitalWrite(vermped2, 0);
     delay(1000);
     digitalWrite(vermped2, 1);
     delay(1000);
     digitalWrite(vermped2, 0);
     delay(1000);
  }
   
}
