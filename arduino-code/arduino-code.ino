#define led_pin 13

void setup() {
    pinMode(led_pin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
   if(Serial.available() > 0){
    char recieved = Serial.read();
    if(recieved == 'H'){
        digitalWrite(led_pin, HIGH);
	Serial.print("On;");
    }else if(recieved == 'L'){
        digitalWrite(led_pin, LOW);
        Serial.print("Off;");
    }else{
        Serial.print("Error, Unknown command;");
    }
  }
}
