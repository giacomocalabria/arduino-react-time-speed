import serial
import matplotlib.pyplot as plt

arduino = serial.Serial('COM3',9600) #Scheda Arduino Mega collegato alla COM3

x=[]    #lista per valori tempo
y=[]    #lista per valori accellerazione
ArrayLenght = 500      #valore campionatura

if int(arduino.readline())== 256:             #verifica se arduino è pronto
    print('Pronto per acquisire')

for i in range(0,ArrayLenght,1):        #acquisisce dati da arduino
    y.append(arduino.readline())
for i in range(0,ArrayLenght,1):
    x.append(arduino.readline())

for i in range(0,ArrayLenght,1):        #converte i dati in numeri interi
    x[i]=int(x[i])
    y[i]=int(y[i])
    
print('Raccolta dati completata elaborazione grafico')

##Produzione grafico##

plt.plot(x,y)
plt.plot([100,100],[0,max(y)])  ##linea per falsa partenza
plt.title('Risultati provenienti dal test')
plt.ylabel('Valore Accellerazione')
plt.xlabel('Tempo')
plt.show()

    
