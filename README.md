# 🌙 Preview Sensor de Luminosidade com LDR e LED (Arduino / ESP32)



https://github.com/user-attachments/assets/a7713f59-5d84-4a7d-9c0f-a49653001287




# 📌 Descrição

Este projeto utiliza um sensor de luminosidade (LDR) para detectar a intensidade de luz no ambiente.
Quando o ambiente fica escuro, um LED é aceso automaticamente. Quando o ambiente está claro, o LED permanece apagado.

O valor de luminosidade é lido através de uma entrada analógica e exibido no Monitor Serial.

## 💻 Código
```const int PINO_LDR = 4;
const int PINO_LED_ESCURO = 23;
const int LIMIAR_ESCURO = 2250;

void setup() {
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
```
