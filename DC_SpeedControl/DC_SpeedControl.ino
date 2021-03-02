//Motor Speed Control

const int MOTOR=9;    //MOTOR ON DIGITAL PIN 9

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (MOTOR, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly

  for (int i=0; i<256; i++){
    analogWrite(MOTOR, i);
    delay(10);
    Serial.println(i);
  }

  delay(2000);
  for (int i=255; i>=0; i--){
    analogWrite(MOTOR, i);
    delay(10);
    Serial.println(i);
  }
  delay(2000);

  
}
