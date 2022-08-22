int offsetX,offsetY,offsetZ;         //Parametro usato per settare lo zero dell'accelerometro al momento dell'accensione
unsigned long TStart = 0;    // Variabile dedicata al tempo di partenza

#define bluled 51
#define greenled 50
#define ArrayLeght 500

int reactSamples[ArrayLeght];      //Buffer dedicati a immagazzinare i campioni provenienti dall'accelerometro
int reactX[ArrayLeght];      
int reactY[ArrayLeght];      
int reactZ[ArrayLeght];      
uint16_t reactInstant[ArrayLeght];     //Buffer dedicato a immagiazzinare gli istanti i tempo associati ai campioni provenienti dell'accelerometro

void setup() {
  Serial.begin(9600);    //Iniziallizzazione della seriale
  
  //******* SETTAGGI INPUT *********
  pinMode(A0,INPUT); //Asse X
  pinMode(A1,INPUT); //Asse Y
  pinMode(A2,INPUT); //Asse Z
  pinMode(A3,INPUT); //Sensore sparo
 
  analogReference(EXTERNAL);     //Imposta di prelevare sul Pin AREF di arduino la tesione di riferimento per la conversione   
  
  //******* SETTAGGI OUTPUT ********                           
  pinMode(greenled,OUTPUT);
  pinMode(bluled,OUTPUT);

  //******* CALIBRAZIONE SENSORE ********
  Calibrate();

  //Comando per avvisare il programma che arduino è pronto per acquisire 
  Serial.println("256");
}  
void loop(){
digitalWrite(greenled,HIGH);
 if (analogRead(A3)> 650){
    TStart = millis();
    doReactTime();
    doPrintResults();
  }
}
