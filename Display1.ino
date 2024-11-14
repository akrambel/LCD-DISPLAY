#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for SSD1306 display connected using I2C
#define OLED_RESET     -1 // Reset pin
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const unsigned char MarilynMonroe [] PROGMEM = {  
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x3c, 0x00, 0x1e, 0x00, 0x78, 0x7f, 0xff, 0x00, 0x00, 0xf0, 0x00, 0x7c, 0x00, 0x3e, 0x00, 
 0x00, 0x7e, 0x00, 0x3f, 0x00, 0xfc, 0x7f, 0xff, 0xc0, 0x01, 0xf8, 0x00, 0x7e, 0x00, 0x7e, 0x00, 
 0x00, 0x7e, 0x00, 0x3f, 0x01, 0xfc, 0x7f, 0xff, 0xe0, 0x01, 0xf8, 0x00, 0xff, 0x00, 0xfe, 0x00, 
 0x00, 0xff, 0x00, 0x3f, 0x03, 0xfc, 0x7f, 0xff, 0xe0, 0x03, 0xfc, 0x00, 0xff, 0x81, 0xfe, 0x00, 
 0x00, 0xff, 0x00, 0x3f, 0x07, 0xf8, 0x7f, 0xff, 0xf0, 0x03, 0xfc, 0x00, 0xff, 0xc3, 0xfe, 0x00, 
 0x01, 0xff, 0x80, 0x3f, 0x07, 0xf0, 0x7c, 0x03, 0xf0, 0x07, 0xfe, 0x00, 0xff, 0xe7, 0xfe, 0x00, 
 0x01, 0xff, 0x80, 0x3f, 0x0f, 0xe0, 0x7c, 0x01, 0xf0, 0x07, 0xfe, 0x00, 0xff, 0xff, 0xfe, 0x00, 
 0x03, 0xff, 0xc0, 0x3f, 0x1f, 0xc0, 0x7c, 0x03, 0xf0, 0x0f, 0xff, 0x00, 0xff, 0xff, 0xfe, 0x00, 
 0x03, 0xff, 0xc0, 0x3f, 0x3f, 0xc0, 0x7c, 0x7f, 0xf0, 0x0f, 0xff, 0x00, 0xff, 0xff, 0xfe, 0x00, 
 0x07, 0xef, 0xe0, 0x3f, 0x3f, 0x80, 0x7c, 0xff, 0xf0, 0x1f, 0x9f, 0x80, 0xff, 0xff, 0xfe, 0x00, 
 0x07, 0xe7, 0xe0, 0x3f, 0x7f, 0x00, 0x7d, 0xff, 0xf0, 0x1f, 0x9f, 0x80, 0xfd, 0xff, 0x3e, 0x00, 
 0x0f, 0xc7, 0xf0, 0x3f, 0x7f, 0x00, 0x7c, 0xff, 0xe0, 0x3f, 0x1f, 0xc0, 0xfc, 0xfe, 0x3e, 0x00, 
 0x0f, 0xc3, 0xf0, 0x3f, 0x3f, 0x80, 0x7c, 0xff, 0xc0, 0x3f, 0x0f, 0xc0, 0xfc, 0x7c, 0x3e, 0x00, 
 0x1f, 0x83, 0xf8, 0x3f, 0x3f, 0xc0, 0x7c, 0x7f, 0x80, 0x7f, 0x07, 0xe0, 0xfc, 0x18, 0x3e, 0x00, 
 0x1f, 0x81, 0xf8, 0x3f, 0x1f, 0xe0, 0x7c, 0x3f, 0x80, 0x7e, 0x07, 0xe0, 0xfc, 0x00, 0x3e, 0x00, 
 0x3f, 0x01, 0xfc, 0x3f, 0x0f, 0xf0, 0x7c, 0x3f, 0xc0, 0xfc, 0x07, 0xf0, 0xfc, 0x00, 0x3e, 0x00, 
 0x3f, 0xff, 0xfc, 0x3f, 0x07, 0xf8, 0x7c, 0x1f, 0xe0, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0x3e, 0x30,
 0x7f, 0xff, 0xfe, 0x3f, 0x03, 0xf8, 0x7c, 0x0f, 0xf1, 0xff, 0xff, 0xf8, 0xfc, 0x00, 0x3e, 0x78, 
 0x7f, 0xff, 0xfe, 0x3f, 0x03, 0xfc, 0x7c, 0x07, 0xf1, 0xff, 0xff, 0xf8, 0xfc, 0x00, 0x3e, 0xfc, 
 0x7f, 0xff, 0xfe, 0x3f, 0x01, 0xfc, 0x7c, 0x03, 0xf1, 0xff, 0xff, 0xf8, 0xfc, 0x00, 0x3e, 0xfc, 
 0x7f, 0xff, 0xfe, 0x3f, 0x00, 0xfc, 0x7c, 0x03, 0xf1, 0xff, 0xff, 0xf8, 0x7c, 0x00, 0x3e, 0x78, 
 0x3f, 0xff, 0xfc, 0x1e, 0x00, 0x78, 0x78, 0x01, 0xf0, 0xff, 0xff, 0xf0, 0x78, 0x00, 0x3c, 0x30, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void setup()
{
  Serial.begin(9600);
  
  // initialize the OLED object
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Clear the buffer.
  display.clearDisplay();

  

  
  // Display bitmap
  display.drawBitmap(0, 0,  MarilynMonroe, 128, 64, WHITE);
  display.display();
  delay(3500);
  display.clearDisplay();

  // Display Text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,28);
  display.println("Starting.");
  display.display();
  delay(1000);
  display.clearDisplay();

  
  // Display Text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,28);
  display.println("Starting..");
  display.display();
  delay(1000);
  display.clearDisplay();

  
  // Display Text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,28);
  display.println("Starting...");
  display.display();
  delay(1000);
  display.clearDisplay();
  
  // Display Text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,28);
  display.println("Starting....");
  display.display();
  delay(1000);
  display.clearDisplay();
  // Scroll part of the screen
  display.setCursor(0,0);
  display.setTextSize(1);
  display.println("Developed by :");
  display.println("");
  display.println("Akram Bellouk");
  display.println("");
  display.println("IP: 192.168.100.39");
  display.println("");
  display.println("");
  display.println("akrambel.github.io/me");
  display.display();
  display.startscrollright(0x02, 0x03);
}

void loop() {
}
