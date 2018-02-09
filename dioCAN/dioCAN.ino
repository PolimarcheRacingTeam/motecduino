#include "variant.h"
#include <due_can.h>

#define APP_ID    0x07
#define APP_LEN   2

void setup()
{
  Serial.begin(115200);
  analogWriteResolution(12);
  Can0.begin(CAN_BPS_1000K);
  Can0.watchFor(APP_ID);
  Serial.println("Ready to fool Motec DBW");
}

uint16_t app = 0; //in raw 12bit DAC counts
CAN_FRAME incoming;

void loop() {

  while (!Can0.available()); //wait for packet

  Can0.read(incoming);
  app = incoming.data.s0;

  analogWrite(DAC0, app);  // write the selected waveform on DAC0
  analogWrite(DAC1, app);  // write the selected waveform on DAC1

  Serial.print("app = ");
  Serial.println(app);

}
