
int vermelho=13;
int amarelo=12;
int verde=11;
int vermelho2=10;
int amarelo2=9;
int verde2=8;
int vermelhopedestre=7;
int verdepedestre=6;
int botao=2;
int botao2=3; //botao de parada durante os sinais vermelho e verde ao mesmo tempo,ou seja, nos períodos longos. 
unsigned long tempoderecarga;
void setup(){
pinMode(vermelho,OUTPUT);
pinMode(amarelo,OUTPUT); 
pinMode(verde,OUTPUT);
pinMode(vermelho2,OUTPUT);
pinMode(amarelo2,OUTPUT);
pinMode(verde2,OUTPUT);
pinMode(vermelhopedestre,OUTPUT);
pinMode(verdepedestre,OUTPUT);
pinMode(botao,INPUT); 
pinMode(botao2,INPUT);  
}

void semafaroA(){ //o semafaro A fica vermelho nesse ciclo


//  delay(19900); //tempo obrigatorio considerando o tempo do outro semafaro igual a 59 segundos 59/3=19,900 ;OBS: retirei esse delay e coloquei lá no loop, inicio do programa.

digitalWrite(verde2,LOW);
digitalWrite(amarelo2,HIGH);
//aqui existira um delay de 10s , mas substitui por uma verificação de 10s 
//verificacao10s();
int soma;
for(soma=0;soma<=100;soma++){
delay(100); 
if (digitalRead(botao2)==1){soma=101; foradeoperacao();}
}

digitalWrite(amarelo2,LOW);
digitalWrite(vermelho2,HIGH); 
piscarapido();//sinal dos pedestres piscando
digitalWrite(verdepedestre,HIGH);
digitalWrite(vermelho,LOW);
digitalWrite(verde,HIGH);

//delay de 59,7s abaixo; //obrigatoria verde liberado por 43, tempo que escolhi fazendo o calculo aproximado do tempo total; coloquei aproximadamente 60s de verificação para substituir logo abaixo
for(soma=0;soma<=597;soma++){
delay(100); 
if (digitalRead(botao2)==1){soma=598; foradeoperacao();}
}

}
void semafaroB(){ //o semaforo B fica vermelho nesse cilo
 digitalWrite(verde,LOW);
 digitalWrite(amarelo,HIGH);
   int soma;
   for(soma=0;soma<=70;soma++){
 delay(100); 
 if (digitalRead(botao2)==1){soma=101; foradeoperacao();}
 }
 piscarapido();
 digitalWrite(amarelo,LOW);
 digitalWrite(vermelho2,LOW);
 
}

void piscarapido(){ //sinal do pedestre pisca rapido 3 vezes item obrigatório do teste 
//isto consome 3 segundos para ser executado
digitalWrite(vermelhopedestre,HIGH);
digitalWrite(verdepedestre,HIGH);
delay (500);
digitalWrite(vermelhopedestre,LOW);
digitalWrite(verdepedestre,LOW);
delay(500);
digitalWrite(vermelhopedestre,HIGH);
digitalWrite(verdepedestre,HIGH);
delay (500);
digitalWrite(vermelhopedestre,LOW);
digitalWrite(verdepedestre,LOW);
delay(500);
digitalWrite(vermelhopedestre,HIGH);
digitalWrite(verdepedestre,HIGH);
delay (500);
digitalWrite(vermelhopedestre,LOW);
digitalWrite(verdepedestre,LOW);
delay(500);

}

void piscarapido(){ //sinal do pedestre pisca rapido 3 vezes item obrigatório do teste 
//isto consome 3 segundos para ser executado
digitalWrite(vermelhopedestre,HIGH);
digitalWrite(verdepedestre,HIGH);
delay (500);
digitalWrite(vermelhopedestre,LOW);
digitalWrite(verdepedestre,LOW);
delay(500);
digitalWrite(vermelhopedestre,HIGH);
digitalWrite(verdepedestre,HIGH);
delay (500);
digitalWrite(vermelhopedestre,LOW);
digitalWrite(verdepedestre,LOW);
delay(500);
digitalWrite(vermelhopedestre,HIGH);
digitalWrite(verdepedestre,HIGH);
delay (500);
digitalWrite(vermelhopedestre,LOW);
digitalWrite(verdepedestre,LOW);
delay(500);

}

void pedidopedestre(){ 
 
piscarapido(); // anunciando que o pedido foi feito, mas ainda não liberando a passagem dos pedestres
digitalWrite(vermelhopedestre,HIGH);
 digitalWrite(verde2,LOW);
 delay(500);
 digitalWrite(verde2,HIGH);
 delay(500);
 digitalWrite(verde2,LOW);
 delay(500);
 digitalWrite(verde2,HIGH);
 delay(500);
 digitalWrite(verde2,LOW);
 delay(500);
 digitalWrite(verde2,HIGH);
 delay(500);
 digitalWrite(verde2,LOW);
 digitalWrite(amarelo2,HIGH);
//abaixo um delay de 10s
int soma;
for(soma=0;soma<=100;soma++){
delay(100); 
if (digitalRead(botao2)==1){soma=101; foradeoperacao();}
}

digitalWrite(amarelo2,LOW);
digitalWrite(vermelho2,HIGH);
delay(2000); //regra de passagem pedido no exercício entre vermelho e verde
digitalWrite(vermelho,LOW);
digitalWrite(verde,HIGH);
digitalWrite(vermelhopedestre,LOW);
digitalWrite(verdepedestre,HIGH);
//abaixo um delay "for" de 59,700s;
 for(soma=0;soma<=597;soma++){
delay(100); 
if (digitalRead(botao2)==1){soma=598; foradeoperacao();}
}
 
 
 digitalWrite(verde,LOW);
 digitalWrite(amarelo,HIGH);
 piscarapido();
 //espera de 7s abaixo
 digitalWrite(vermelhopedestre,HIGH); //estado inicial do loop ..teoricamente não necessário, mas coloquei aqui
 for(soma=0;soma<=70;soma++){
 delay(100); 
 if (digitalRead(botao2)==1){soma=101; foradeoperacao();}
 }
 digitalWrite(amarelo,LOW);
 digitalWrite(vermelho,HIGH); //estado inical do loop
 delay(2000);
 digitalWrite(vermelho2,LOW); 
 digitalWrite(verde2,HIGH); //Estado inicial do loop

 
}

void foradeoperacao(){
 digitalWrite(vermelho,LOW);
 digitalWrite(amarelo,LOW);
 digitalWrite(verde,LOW);
 digitalWrite(vermelho2,LOW);
 digitalWrite(amarelo2,LOW);
 digitalWrite(verde2,LOW);
 digitalWrite(vermelhopedestre,LOW);
 digitalWrite(verdepedestre,LOW);
 delay(60);
 
 digitalWrite(amarelo,HIGH);
 digitalWrite(amarelo2,HIGH);
 digitalWrite(vermelhopedestre,HIGH);
 digitalWrite(verdepedestre,HIGH);
 delay(500);
   digitalWrite(amarelo,LOW);
 digitalWrite(amarelo2,LOW);
 digitalWrite(vermelhopedestre,LOW);
 digitalWrite(verdepedestre,LOW);
 delay(500);
if (digitalRead(botao2)==0){ foradeoperacao();}
else{delay(5000); 
digitalWrite(vermelho,HIGH);
digitalWrite(verde2,HIGH);
digitalWrite(vermelhopedestre,HIGH);
int soma;
for(soma=0;soma<=100;soma++){
delay(199);
if (digitalRead(botao)==1){soma=101;  pedidopedestre(); } 
if (digitalRead(botao2)==1){soma=101; foradeoperacao();}
}
semafaroA();} 
}

void loop(){
 
 //estado inicial de todo o loop, para evitar problemas de troca, o loop inicial marca todas as variaveis possíveis
digitalWrite(verde,LOW);
digitalWrite(vermelho,HIGH);
digitalWrite(amarelo,LOW);
digitalWrite(verde2,HIGH);
digitalWrite(amarelo2,LOW);
digitalWrite(vermelho2,LOW);
digitalWrite(vermelhopedestre,HIGH);
digitalWrite(verdepedestre,LOW);
//abaixo verifica se o botão UM ou DOIS estão ligados e de acordo manda o código para respectiva funcao; no total esse "for" tem 19,90s só que está quebrado em tempos de 0,199s em 100 partes
int soma;
for(soma=0;soma<=100;soma++){
delay(199);
if (digitalRead(botao)==1){soma=101;  pedidopedestre(); } 
if (digitalRead(botao2)==1){soma=101; foradeoperacao();}
}
//esses delays acumulam 19,900 que é o tempo do verde de um dos semafaros
semafaroA();
}

