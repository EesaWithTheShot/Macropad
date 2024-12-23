#include <U8g2lib.h>

int MOSIp = 10;
int SCKp = 45;
int DCp = 24;
int RSTp = 6;
int CSp = 11;
// U8G2_SSD1322_NHD_256X64_1_4W_SW_SPI u8g2(U8G2_R0, /* clock=*/SCKp, /* data=*/MOSIp, /* cs=*/CSp, /* dc=*/DCp, /* reset=*/RSTp);
U8G2_SSD1322_NHD_256X64_F_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/CSp, /* dc=*/DCp, /* reset=*/RSTp);

void setup(void) {
  Serial.begin(115200);
  u8g2.begin();

  Serial.println("Successfully Initialized");
}

void loop(void) {
  u8g2.clearBuffer();					// clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);	// choose a suitable font
  u8g2.drawStr(0,10,"Hello World! My name is eESA");	// write something to the internal memory
  u8g2.sendBuffer();					// transfer internal memory to the display
  delay(1000);
  // u8g2.clearBuffer();           // Clear the internal buffer
  // u8g2.drawBox(0, 0, 256, 64);  // Draw a box that fills the entire display
  // u8g2.sendBuffer();            // Send the buffer to the display
  // delay(1000);
}