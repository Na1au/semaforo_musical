// Semáforo para deficientes visuais - toca música
const int pino_buzzer = 2;
const int vm = 13;
const int am = 11;
const int vd = 9;
const int vm2 = 7;
const int vd2 = 6;

const int A = 440; //A4
const int a2 = 880; //A5
const int C = 523; //C5
const int c = 554; //C5#
const int D = 587; //D5
const int F = 698; //F5
const int E = 659; //E5
//identificando dispositivos e notas musicais

void setup(){
pinMode(pino_buzzer, OUTPUT);
pinMode(vm, OUTPUT);
pinMode(vd, OUTPUT);
pinMode(am, OUTPUT);
pinMode(vm2, OUTPUT);
pinMode(vd2, OUTPUT);
}
// Define os dispositivos como sáida

void loop(){
  digitalWrite(vm, HIGH);
  digitalWrite(am, LOW);
  digitalWrite(vd, LOW);
  //sinal vermelho carros
  digitalWrite(vd2, HIGH);
  //sinal verde pedestres
  digitalWrite(vm2, HIGH);
  tone(pino_buzzer, F);
  delay(500);
  digitalWrite(vm2, LOW);
  noTone(pino_buzzer);
  delay(500);
  digitalWrite(vm2, HIGH);
  tone(pino_buzzer, F);
  delay(500);
  digitalWrite(vm2, LOW);
  noTone(pino_buzzer);
  delay(500);
  digitalWrite(vm2, HIGH);
  tone(pino_buzzer, F);
  delay(500);
  //sinal vermelho piscando para alertar pedestres
  
  digitalWrite(vm, LOW);
  digitalWrite(am, LOW);
  digitalWrite(vd, HIGH);
  //sinal verde carros
  digitalWrite(vm2, HIGH);
  digitalWrite(vd2, LOW);
  //sinal vermelho pedestres
  tone(pino_buzzer, F);
delay(200);
tone(pino_buzzer, D);
delay(200);
tone(pino_buzzer, A);
delay(200);
tone(pino_buzzer, D);
delay(200);
tone(pino_buzzer, F);
delay(200);
  tone(pino_buzzer, D);
delay(200);
tone(pino_buzzer, A);
delay(200);
tone(pino_buzzer, D);
delay(200);
tone(pino_buzzer, F);
delay(200);
tone(pino_buzzer, C);
delay(200);
  tone(pino_buzzer, A);
delay(200);
tone(pino_buzzer, C);
delay(200);
tone(pino_buzzer, F);
delay(200);
tone(pino_buzzer, C);
delay(200);
tone(pino_buzzer, A);
delay(200);
  tone(pino_buzzer, C);
delay(200);
tone(pino_buzzer, E);
delay(200);
tone(pino_buzzer, c);
delay(200);
tone(pino_buzzer, A);
delay(200);
tone(pino_buzzer, c);
delay(200);
  // delay(4000); //espera 4 segundos
  
  digitalWrite(vm, LOW);
  digitalWrite(am, HIGH);
  digitalWrite(vd, LOW);
  //sinal amarelo carros
  //sinal se mantém vermelho para pedestres
  tone(pino_buzzer, E);
delay(200);
tone(pino_buzzer, c);
delay(200);
tone(pino_buzzer, A);
delay(200);
tone(pino_buzzer, c);
delay(200);
  tone(pino_buzzer, E);
delay(500);
tone(pino_buzzer, a2);
delay(500);
tone(pino_buzzer, D);
delay(500);
  noTone(pino_buzzer);
 delay(500);
  tone(pino_buzzer, D);
 delay(500);
  noTone(pino_buzzer);
 delay(500);
  tone(pino_buzzer, D);
 delay(500);
  noTone(pino_buzzer);
 delay(500);
  tone(pino_buzzer, D);
 delay(500);
  noTone(pino_buzzer);
  digitalWrite(vm, HIGH);
  digitalWrite(am, LOW);
  digitalWrite(vd, LOW);
  //sinal vermelho carros
  digitalWrite(vm2, LOW);
  digitalWrite(vd2, HIGH);
  delay(4000);
  //sinal verde pedestres
}