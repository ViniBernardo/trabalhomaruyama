void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}
int leitura;

void loop() {
  
    if(Serial.available()) {
      
      leitura = Serial.read();
      // ligar ventilador 1
      if (leitura == 49) {
        digitalWrite(6,HIGH);
      }
      // desligar ventilador 2
      else if (leitura == 50) {
        digitalWrite(6,LOW);
      }
      // ligar luz_da_sala 3
      else if (leitura == 51) {
        digitalWrite(7,HIGH);
      }
      // desligar luz da sala 4
      else if (leitura == 52) {
        digitalWrite(7,LOW);
      }

      // ligar tv 5
      else if (leitura == 53) {
        digitalWrite(8,HIGH);
      }

      // desligar tv 6
      else if (leitura == 54) {
        digitalWrite(8,LOW);
      }

      // desligar luz_quarto 7
      else if (leitura == 55) {
        digitalWrite(9,HIGH);
      }

      // desligar luz_quarto 8
      else if (leitura == 56) {
        digitalWrite(9,LOW);
      }
    
    }
  }

