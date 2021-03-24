# Automatic lighting system
### Nowadays the wastage of electricity has become a routine thing for us, and the problem has become frequent at homes, schools, and colleges and even in industries. Sometimes we notice fans and lights keep on working even in the absence of people. This often happens in homes, offices and public places due to utter negligence of the inmates. This results in unnecessary power wastage. Therefore, an automatic room-light controller automatically turns on the lights when a person enters into a room, and turns off the lights when the person leaves the room. This automatic room controller can be implemented by using a simple microcontroller and wireless IR technologies.

## COMPONENTS REQUIRED 

### •	Arduino UNO 
### •	5V Relay module
### •	IR sensor
### •	LCD Screen 
### •	Breadboard
### •	Jumper Wires 
### •	Bulb 
### •	Power Supply

# WORKING
### When a person enters into the room, an IR beam is obstructed between the IR transmitter and the receiver. This IR obstruction from the sensor-1 and sensor-2 respectively gives the corresponding signal to the microcontroller. The microcontroller is programmed in such a way that by the reception of the signal from the sensor pairs it turns on the lights. Thus, the microcontroller gives command signals to a relay driver which turns the relays such that lights turn on.

### When the person leaves from this room, set of IR sensors (sensor-2 and sensor-1 respectively) enable and give control signals to the microcontroller. Furthermore, similar to the above process, this system turns off the lights. Apart from this, the system also takes account of the number of persons inside the room so that this control operation is varied depending on the person’s availability in the room.

### For every person entering and leaving the room, the microcontroller reads the digital input from two receivers, and calculates the number of persons inside the room, and then displays it on the LCD. When the persons’ count is greater than one, the microcontroller turns on the room light and when the persons’ count is zero, it turns off all the lights and fans.

![WhatsApp Image 2021-02-06 at 12 58 33 AM](https://user-images.githubusercontent.com/70061105/107080219-f988e680-6816-11eb-92ef-5cb33dec7460.jpeg)
