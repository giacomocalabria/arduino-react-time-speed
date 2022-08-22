void Calibrate(){                          //Associa ai valori di offset i valori iniziali delle tre uscite dell'accelerometro per poter fare l'azzeramento
  digitalWrite(bluled,HIGH);
  delay(250);
  digitalWrite(bluled,LOW);
  delay(250);
  digitalWrite(bluled,HIGH);
  delay(250);
  digitalWrite(bluled,LOW);
  delay(250);
  digitalWrite(bluled,HIGH);
  delay(250);
  
  offsetX=analogRead(A0);
  offsetY=analogRead(A1);
  offsetZ=analogRead(A2);
  
  digitalWrite(bluled,LOW);
  digitalWrite(greenled,HIGH);
//  Serial.print("Offset X:");
//  Serial.println(offsetX);
//  Serial.print("Offset Y:");
//  Serial.println(offsetY);
//  Serial.print("Offset Z:");
//  Serial.println(offsetZ);
}
