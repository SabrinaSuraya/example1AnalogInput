void setup() {
 Serial.begin(9600);

 for(;;){
     int value =analogRead(A0);
     Serial.println(value);
 }
  
}

void loop() {


}
