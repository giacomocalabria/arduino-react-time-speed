void doReactTime(){
  for(int i = 0; i<ArrayLeght ; i++){
    reactInstant[i] = millis();
    reactX[i] = analogRead(A0);//reactY[i] = analogRead(A1);
    reactZ[i] = analogRead(A2);
    delayMicroseconds(774); //valore preso sperimentalmente
  }
  digitalWrite(greenled,LOW);     
} 
