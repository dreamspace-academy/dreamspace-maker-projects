# Hand Gesture Control


The principle behind the Arduino-based Hand Gesture Control of Computers is actually very simple. All you have to do is use two Ultrasonic Sensors with Arduino, place your hand in front of the Ultrasonic Sensor and calculate the distance between the hand and the sensor. Using this information, relevant actions in the computer can be performed.
</p>

<p align="justify">
The position of the Ultrasonic Sensors is very important. Place the two Ultrasonic Sensors on the top of a laptop screen at either end. The distance information from Arduino is collected by a Python Program and a special library called PyAutoGUI will convert the data into keyboard click actions.
</p>

<p align="center">
<img src="./source/images/automatic-hand-gesture-control.JPG
" alt= "GESTURES" width=70% height=50%/>
</p>
