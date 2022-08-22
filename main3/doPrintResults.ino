void doPrintResults(){
  for (int i=0;i<ArrayLeght;i++){
   reactSamples[i] = sqrt(square(reactX[i]-offsetX)+square(reactY[i]-offsetY)+square(reactZ[i]-offsetZ));
  }
  for (int i=0;i<ArrayLeght;i++){
   Serial.println(reactSamples[i]);
   delay(10);
  }
  for (int i=0;i<ArrayLeght;i++){
   Serial.println(reactInstant[i]);
   delay(10);
  }
  
}
