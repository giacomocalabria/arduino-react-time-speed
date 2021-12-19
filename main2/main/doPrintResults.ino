void doPrintResults(){
  for (int i=0;i<ArrayLeght;i++){
   Serial.println(sqrt(square(reactX[i]-offsetX)+square(reactY[i]-offsetY)+square(reactZ[i]-offsetZ)));
   delay(5);
  }
  for (int i=0;i<ArrayLeght;i++){
   Serial.println(reactInstant[i]);
   delay(5);
  }
}
