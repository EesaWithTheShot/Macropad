#include <U8g2lib.h>
#include <string>

// all the adssigned pins on the board
// Left side
#define EXTRA_PIN (6)
#define DC_PIN (8)
#define CS_PIN (17)
#define RST_PIN (20)
#define COL_0_PIN (22)
#define COL_1_PIN (24)
#define COL_2_PIN (32)
#define COL_3_PIN (11)
#define RE_A_PIN (36)
#define RE_B_PIN (38)
// Right Side
#define ROW_5_PIN (31)
#define ROW_4_PIN (29)
#define ROW_3_PIN (2)
#define ROW_2_PIN (47)
#define SCK_PIN (45)
#define ROW_1_PIN (43)
#define MOSI_PIN (10)
#define ROW_0_PIN (9)

U8G2_SSD1322_NHD_256X64_F_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/CS_PIN, /* dc=*/DC_PIN, /* reset=*/RST_PIN);

void setup(void) {
  Serial.begin(115200);
  u8g2.begin();

  Serial.println("Successfully Initialized");
}

void loop(void) {
  u8g2.clearBuffer();                                   // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);                   // choose a suitable font
  u8g2.drawStr(0, 10, "Hello World! My name is eESA");  // write something to the internal memory
  u8g2.sendBuffer();                                    // transfer internal memory to the display
  delay(1000);
  // u8g2.clearBuffer();           // Clear the internal buffer
  // u8g2.drawBox(0, 0, 256, 64);  // Draw a box that fills the entire display
  // u8g2.sendBuffer();            // Send the buffer to the display
  // delay(1000);
}