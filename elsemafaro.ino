int ledDelay = 10000;
int greenPin0 = 0;
int yellowPin0 = 1;
int redPin0 = 2;
int greenPin1 = 3;
int yellowPin1 = 4;
int redPin1 = 5;
int greenPin2 = 6;
int yellowPin2 = 7;
int redPin2 = 8;
int greenPin3 = 9;
int yellowPin3 = 10;
int redPin3 = 11;

void setup() {
pinMode(redPin0, OUTPUT);
pinMode(yellowPin0, OUTPUT);
pinMode(greenPin0, OUTPUT);
pinMode(redPin1, OUTPUT);
pinMode(yellowPin1, OUTPUT);
pinMode(greenPin1, OUTPUT);
pinMode(redPin2, OUTPUT);
pinMode(yellowPin2, OUTPUT);
pinMode(greenPin2, OUTPUT);
pinMode(redPin3, OUTPUT);
pinMode(yellowPin3, OUTPUT);
pinMode(greenPin3, OUTPUT);

}

void loop() {

digitalWrite(redPin1,HIGH);
digitalWrite(redPin2,HIGH);
digitalWrite(redPin3,HIGH);
//SEMAFORO 0
  // turn the red light on
digitalWrite(greenPin0, HIGH);
delay(ledDelay); // wait 5 seconds
digitalWrite(greenPin0, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin0, HIGH);
delay(300);
digitalWrite(greenPin0, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin0, HIGH);
delay(300);
digitalWrite(greenPin0, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin0, HIGH);
delay(300);
digitalWrite(greenPin0, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin0, HIGH);
delay(300);
digitalWrite(greenPin0,LOW);
//Connect it up
digitalWrite(yellowPin0, HIGH); // turn on yellow
delay(1000); // wait 2 seconds
digitalWrite(greenPin0, LOW); // turn green on
digitalWrite(redPin0, HIGH); // turn red off
digitalWrite(yellowPin0, LOW); // turn yellow off
//delay(ledDelay);
digitalWrite(greenPin0, LOW); // turn green on
digitalWrite(redPin0, HIGH); // turn red off SE QUEDA EN ROJO EL SEMAFORO 1
digitalWrite(yellowPin0, LOW); // turn yellow off
  digitalWrite(redPin1,LOW);
//SEMAFORO 1
  // turn the red light on
digitalWrite(greenPin1, HIGH);
delay(ledDelay); // wait 5 seconds
digitalWrite(greenPin1, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin1, HIGH);
delay(300);
digitalWrite(greenPin1, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin1, HIGH);
delay(300);
digitalWrite(greenPin1, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin1, HIGH);
delay(300);
digitalWrite(greenPin1, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin1, HIGH);
delay(300);
digitalWrite(greenPin1,LOW);
//Connect it up
digitalWrite(yellowPin1, HIGH); // turn on yellow
delay(1000); // wait 2 seconds
digitalWrite(greenPin1, LOW); // turn green on
digitalWrite(redPin1, HIGH); // turn red off
digitalWrite(yellowPin1, LOW); // turn yellow off
//delay(ledDelay);
digitalWrite(greenPin1, LOW); // turn green on
digitalWrite(redPin1, HIGH); // turn red off SE QUEDA EN ROJO EL SEMAFORO 1
digitalWrite(yellowPin1, LOW); // turn yellow off
//SEMAFORO 2
  // turn the red light on
  digitalWrite(redPin2,LOW);
digitalWrite(greenPin2, HIGH);
delay(ledDelay); // wait 5 seconds
digitalWrite(greenPin2, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin2, HIGH);
delay(300);
digitalWrite(greenPin2, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin2, HIGH);
delay(300);
digitalWrite(greenPin2, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin2, HIGH);
delay(300);
digitalWrite(greenPin2, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin2, HIGH);
delay(300);
digitalWrite(greenPin2,LOW);
//Connect it up
digitalWrite(yellowPin2, HIGH); // turn on yellow
delay(1000); // wait 2 seconds
digitalWrite(greenPin2, LOW); // turn green on
digitalWrite(redPin1, HIGH); // turn red off
digitalWrite(yellowPin2, LOW); // turn yellow off
//delay(ledDelay);
digitalWrite(greenPin2, LOW); // turn green on
digitalWrite(redPin2, HIGH); // turn red off SE QUEDA EN ROJO EL SEMAFORO 1
digitalWrite(yellowPin2, LOW); // turn yellow off
//SEMAFORO 3
  // turn the red light on
  digitalWrite(redPin3,LOW);
digitalWrite(greenPin3, HIGH);
delay(ledDelay); // wait 5 seconds
digitalWrite(greenPin3, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin3, HIGH);
delay(300);
digitalWrite(greenPin3, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin3, HIGH);
delay(300);
digitalWrite(greenPin3, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin3, HIGH);
delay(300);
digitalWrite(greenPin3, LOW);
delay(300); // wait 5 seconds
digitalWrite(greenPin3, HIGH);
delay(300);
digitalWrite(greenPin3,LOW);
//Connect it up
digitalWrite(yellowPin3, HIGH); // turn on yellow
delay(1000); // wait 2 seconds
digitalWrite(greenPin3, LOW); // turn green on
digitalWrite(redPin3, HIGH); // turn red off
digitalWrite(yellowPin3, LOW); // turn yellow off
//delay(ledDelay);
digitalWrite(greenPin1, LOW); // turn green on
digitalWrite(redPin1, LOW); // turn red off SE QUEDA EN ROJO EL SEMAFORO 1
digitalWrite(yellowPin1, LOW); // turn yellow off
digitalWrite(redPin0, LOW);
digitalWrite(redPin1, LOW);
digitalWrite(redPin2, LOW);
}
