void doReactTime(){
  for(int i = 0; i<ArrayLeght ; i++){
    reactInstant[i] = millis() - TStart;
    reactX[i] = analogRead(A0);
    reactY[i] = analogRead(A1);
    reactZ[i] = analogRead(A2);
    delayMicroseconds(1000);
  }
  digitalWrite(greenled,LOW);      
} 
