# motecduino
For Arduino Due.
Receives a 2 byte packet via CAN bus (ID 0x007) and writes the 12 lowest bits to DAC0 and DAC1. (values 0-4095)

Use Arduino IDE to install the due_can library.

Connect CAN transceiver as in the schematic.
