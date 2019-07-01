#include <bcm2835.h>

#include <stdio.h>		//printf()
#include <stdlib.h>		//exit()
#include <time.h>  

#include "LCD_Driver.h"
#include "LCD_GUI.h"
#include "LCD_BMP.h"
#include "DEV_Config.h"

int main(void)
{
	//1.System Initialization
	if(System_Init())
		exit(0);
	
	//2.show
	printf("**********Init LCD**********\r\n");
	LCD_SCAN_DIR LCD_ScanDir = SCAN_DIR_DFT;//SCAN_DIR_DFT = D2U_L2R
	LCD_Init(LCD_ScanDir );	
	
	//printf("LCD Show \r\n");
	//GUI_Show();
	//Driver_Delay_ms(1000);
	
	
	time_t time1,time2;
	int i;
	printf("show bmp\r\n");
	time(&time1);
	for(i =0;i < 1000;i++){
		if(i % 2 == 0)
			LCD_ShowBmp("./pic/time.bmp");
		else
			LCD_ShowBmp("./pic/ninja.bmp");
	}
		
	time(&time2);
	printf("use time = %ld\r\n",time2 - time1);
	//3.System Exit
	System_Exit();
	return 0;
	
}

