void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
}

void loop() {
Serial.println(analogRead(A3));
delay(1);
}
