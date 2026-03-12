const int PINO_LDR = 4;
const int PINO_LED_ESCURO = 23;
const int LIMIAR_ESCURO = 2250;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(PINO_LED_ESCURO, OUTPUT);
}

void loop() {

  const int valor_luminosidade = analogRead(PINO_LDR);

  Serial.print("Valor da luminosidade: ");
  Serial.println(valor_luminosidade);

  if (valor_luminosidade < LIMIAR_ESCURO){
    Serial.println("Ambiente escuro! Acendendo o LED");
    digitalWrite(PINO_LED_ESCURO, HIGH);
  } else {
    Serial.println("Ambiente claro. LED apaga.");
    digitalWrite(PINO_LED_ESCURO, LOW);
  }

  delay(1000);


}
