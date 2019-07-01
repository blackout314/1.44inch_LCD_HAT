#ifndef _DEV_CONFIG_H_
#define _DEV_CONFIG_H_

#include <SPI.h>
/***********************************************************************************************************************
			------------------------------------------------------------------------
			|\\\																///|
			|\\\					Hardware interface							///|
			------------------------------------------------------------------------
***********************************************************************************************************************/

/****************************************************************************************
		//Use the  library function definition
*****************************************************************************************/
//GPIO config
//LCD
#define LCD_CS 10
#define LCD_CS_0		digitalWrite(LCD_CS, LOW)
#define LCD_CS_1		digitalWrite(LCD_CS, HIGH)

#define LCD_RST 8
#define LCD_RST_0		digitalWrite(LCD_RST, LOW)
#define LCD_RST_1		digitalWrite(LCD_RST, HIGH)

#define LCD_DC 7
#define LCD_DC_0		digitalWrite(LCD_DC, LOW)
#define LCD_DC_1		digitalWrite(LCD_DC, HIGH)

#define LCD_BL 7
#define LCD_BL_0    digitalWrite(LCD_DC, LOW)
#define LCD_BL_1    digitalWrite(LCD_DC, HIGH)

#define SPI_Write_Byte(__DATA)   SPI.transfer(__DATA)
/*------------------------------------------------------------------------------------------------------*/

extern void Driver_Delay_ms(unsigned long xms);
extern void Driver_Delay_us(int xus);

#endif
