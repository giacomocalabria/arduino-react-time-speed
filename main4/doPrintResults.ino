void doPrintResults(){
  digitalWrite(bluled,HIGH);
  for (int i=0;i<ArrayLeght;i++){
    reactSamples[i] = sqrt(square(reactX[i]-offsetX)+square(reactZ[i]-offsetZ));
    Serial.println(reactSamples[i]);
    delayMicroseconds(500);
  }
  for (int i=0;i<ArrayLeght;i++){
    Serial.println(reactInstant[i] - TStart);
  }
  digitalWrite(bluled,LOW);
}
