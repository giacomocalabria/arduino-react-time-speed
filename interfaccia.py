import serial
import matplotlib.pyplot as plt

arduino = serial.Serial('/dev/ttyACM0',9600)

x=[]
y=[]
ArrayLenght = 1000

print('pronto')

for i in range(0,ArrayLenght,1):
    x.append(arduino.readline())


for i in range(0,ArrayLenght,1):
    y.append(arduino.readline())

plt.plot(y,x)
plt.title('Risultati provenienti dal test')
plt.grid()
plt.ylabel('Valore Accellerazione')
plt.xlabel('Tempo')
plt.show()

    
