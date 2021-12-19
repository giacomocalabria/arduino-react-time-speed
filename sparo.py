from pygame import mixer
import serial
arduino = serial.Serial('/dev/ttyACM0',9600)
mixer.init()
mixer.music.load('/home/giacomo/Scrivania/react time speed/sparo.mp3')
x = 1
while x!=0:
    c = arduino.readline()
    print (c)
    mixer.music.play()
