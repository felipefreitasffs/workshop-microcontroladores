const int pino_led_azul = D7;
const int pino_led_verde = D9;
const int pino_led_vermelho = D5;

void setup() {
  // configura o pino com o LED como saída
  pinMode(pino_led_azul, OUTPUT);
  pinMode(pino_led_verde, OUTPUT);
  pinMode(pino_led_vermelho, OUTPUT);
}

void loop() {
  digitalWrite(pino_led_azul, HIGH); // acende o LED
  delay(1000); // aguarda 1 segundo
  digitalWrite(pino_led_azul, LOW); // apaga o LED
  delay(1000); // aguarda 1 segundo

  digitalWrite(pino_led_verde, HIGH); // acende o LED
  delay(1000); // aguarda 1 segundo
  digitalWrite(pino_led_verde, LOW); // apaga o LED
  delay(1000); // aguarda 1 segundo

  digitalWrite(pino_led_vermelho, HIGH); // acende o LED
  delay(1000); // aguarda 1 segundo
  digitalWrite(pino_led_vermelho, LOW); // apaga o LED
  delay(1000); // aguarda 1 segundo
}
