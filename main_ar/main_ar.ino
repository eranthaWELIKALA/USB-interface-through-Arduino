void setup() {                  
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    int byteRead = Serial.read()-48;
    Serial.println(byteRead);
    
    Serial.write('a');
    Serial.write('b');
    Serial.write('c');
    Serial.write('d');
    Serial.write('1');
    Serial.write('2');
    Serial.write('3');
    Serial.write('4');
    Serial.write('\n');
  }
}
