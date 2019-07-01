#include "DEV_Config.h"
#include <SPI.h>

/********************************************

*********************************************/	
void Driver_Delay_ms(unsigned long xms)	
{	
	delay(xms);
}

void Driver_Delay_us(int xus)
{
  for(int j=xus;j > 0;j--);    
}
