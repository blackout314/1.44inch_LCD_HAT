#include <SPI.h>
#include "LCD_Driver.h"
#include "LCD_GUI.h"
#include "DEV_Config.h"

void setup()
{
  pinMode(LCD_CS, OUTPUT);
  pinMode(LCD_RST, OUTPUT);
  pinMode(LCD_DC, OUTPUT);

  Serial.begin(115200);
  SPI.setDataMode(SPI_MODE0);
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV2);
  SPI.begin();

  LCD_SCAN_DIR Lcd_ScanDir = SCAN_DIR_DFT;
  Serial.println("LCD Init ");
  LCD.LCD_Init( Lcd_ScanDir );

  Serial.println("LCD_Show ");
  GUI_Show();
}

void loop()
{

}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/

