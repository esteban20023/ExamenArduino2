int LED = 11;

void setup () {
  pinMode (LED, OUTPUT);
}

void loop () {
  digitalWrite(LED, LOW);
  digitalWrite(LED, HIGH);
  delay(9600);
  
  digitalWrite(LED, HIGH);
  digitalWrite(LED, LOW);
  delay(16000);

  digitalWrite(LED, HIGH);
  digitalWrite(LED, HIGH);
  delay(22000);
  
}  


//  
//JESUS FRANCISCO RUIZ RANGEL
//ESTEBAN DAVID JIMENEZ JIMENEZ 
