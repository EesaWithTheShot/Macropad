

// // Report ID
// enum {
//   RID_KEYBOARD = 1,
//   RID_MOUSE,
//   RID_CONSUMER_CONTROL,
// };
// // HID report descriptor using TinyUSB's template
// // uint8_t const desc_hid_report[] = {
// //     TUD_HID_REPORT_DESC_KEYBOARD(HID_REPORT_ID(RID_KEYBOARD)),
// //     TUD_HID_REPORT_DESC_MOUSE   (HID_REPORT_ID(RID_MOUSE)),
// //     TUD_HID_REPORT_DESC_CONSUMER(HID_REPORT_ID(RID_CONSUMER_CONTROL))
// // };
// // // USB HID object.
// // Adafruit_USBD_HID usb_hid;

// int count = 0;
// char str[100] = "";

// void setup(void) {
//   Serial.begin(115200);
//   u8g2.begin();
//   TinyUSBDevice.begin();
//   Serial.println("Successfully Initialized");
//   // if (!TinyUSBDevice.isInitialized()) {
//   //   TinyUSBDevice.begin(0);
//   // }
//   //   // Set up HID
//   // usb_hid.setPollInterval(2);
//   // usb_hid.setReportDescriptor(desc_hid_report, sizeof(desc_hid_report));
//   // usb_hid.setStringDescriptor("TinyUSB HID Composite");
//   // usb_hid.begin();

//   // // If already enumerated, additional class driverr begin() e.g msc, hid, midi won't take effect until re-enumeration
//   // if (TinyUSBDevice.mounted()) {
//   //   TinyUSBDevice.detach();
//   //   delay(10);
//   //   TinyUSBDevice.attach();
//   // }

//   pinMode(17, INPUT_PULLUP);
// }

// void loop(void) {
//   if (TinyUSBDevice.suspended()) {
//     // Wake up host if needed
//     TinyUSBDevice.remoteWakeup();
//   }

//   // Example: Send the 'a' key
//   uint8_t keycode[6] = { HID_KEY_A, 0, 0, 0, 0, 0 };
//   TinyUSBDevice.hid().keyboardReport(0, 0, keycode);
//   delay(100);
//   // Release the key
//   TinyUSBDevice.hid().keyboardRelease(0);
//   delay(1000);



//   u8g2.clearBuffer();                                   // clear the internal memory
//   u8g2.setFont(u8g2_font_ncenB08_tr);                   // choose a suitable font
//   u8g2.drawStr(0, 10, "Hello World! My name is eESA");  // write something to the internal memory
//   if (digitalRead(17) == LOW) {
//     count++;
//     strcat(str, "u");
//     Keyboard.write('u');
//   }
//   u8g2.drawStr(100, 30, str);
//   u8g2.sendBuffer();  // transfer internal memory to the display
//   delay(100);
// }