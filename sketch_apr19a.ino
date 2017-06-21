void setup() {
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  
}
int leitura;

void loop() {
  if(Serial.available()){
    leitura = Serial.read();
    
    if(leitura == 49){
       digitalWrite(6,LOW);
    }else if(leitura == 50){
        digitalWrite(6,HIGH);
    }else if(leitura == 51){
        digitalWrite(7,HIGH);
    }else if(leitura == 52){
        digitalWrite(7,LOW);
    }else if(leitura == 55){
        digitalWrite(5,HIGH);
    }else if(leitura == 56){
        digitalWrite(5,LOW);
    }else if(leitura == 53){
        digitalWrite(4,HIGH);
    }else if(leitura == 54){
        digitalWrite(4,LOW);
    } 
  }
}
