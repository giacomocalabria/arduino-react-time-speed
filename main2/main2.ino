int offsetX,offsetY,offsetZ;         //Parametro usato per settare lo zero dell'accelerometro al momento dell'accensione
unsigned long TStart = 0;    // Variabile dedicata al tempo di partenza in millesimi

#define test 1000
#define bluled 51
#define greenled 50
const int ArrayLeght=1000;
      
uint8_t reactX[ArrayLeght];     //Buffer dedicati a immagazzinare i campioni provenienti dall'accelerometro 
uint8_t reactY[ArrayLeght];      
uint8_t reactZ[ArrayLeght];      
uint16_t reactInstant[ArrayLeght];     //Buffer dedicato a immagiazzinare gli istanti i tempo associati ai campioni provenienti dell'accelerometro

void setup() {
  //******* SETTAGGI OUTPUT SERIALE *********
  Serial.begin(9600);    //Iniziallizzazione della seriale
  
  //******* SETTAGGI INPUT *********
  pinMode(A0,INPUT); //Asse X
  pinMode(A1,INPUT); //Asse Y
  pinMode(A2,INPUT); //Asse Z
  pinMode(A3,INPUT); //Sensore sparo
 
  analogReference(EXTERNAL);     //Imposta di prelevare sul Pin AREF di arduino la tesione di riferimento per la conversione 3.3v  
  
  //******* SETTAGGI OUTPUT ********                           
  pinMode(greenled,OUTPUT);
  pinMode(bluled,OUTPUT);

  //******* SETTAGGI SENSORI ********
  Calibrate();
}  
void loop(){
digitalWrite(greenled,HIGH);
 if (analogRead(A3)> 650){ //ricezione segnale di partenza
    TStart = millis();  //tempo di partenza
    tone(12,650,100);   //suono di partenza
    doReactTime();      //raccolta dati della partenza
    doPrintResults();   //print dei dati dalla partenza
  }
}
