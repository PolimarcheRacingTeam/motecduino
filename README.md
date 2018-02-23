# motecduino
For Arduino Due.
Receives a 2 byte packet via CAN bus (ID 0x100) and writes the 12 lowest bits to DAC0 and DAC1. (values 0-4095)

test with raspberry pi

>> cansend can0 100#0f00 
sets ADCs to 15 watch out for endianness!


Use Arduino IDE to install the due_can library.

Connect CAN transceiver as in the schematic.
