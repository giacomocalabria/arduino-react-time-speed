void Calibrate(){                          //Associa ai valori di offset i valori iniziali delle tre uscite dell'accelerometro per poter fare l'azzeramento
  float somma=0;
  digitalWrite(bluled,HIGH);
  delay(1000);
  for (int i;i<test;i++){
   somma += analogRead(A0);
   delay(1);
   }  
  offsetX=somma/test; somma=0;
  
  for (int i;i<test;i++){
   somma += analogRead(A1);
   delay(1);
   }
  offsetY=somma/test; somma=0; 
   
  for (int i;i<test;i++){
   somma += analogRead(A2);
   delay(1);
   }
  offsetZ=somma/test;
  digitalWrite(bluled,LOW);
}
