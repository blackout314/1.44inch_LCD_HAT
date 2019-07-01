#ifndef _DEV_CONFIG_H_
#define _DEV_CONFIG_H_
/***********************************************************************************************************************
			------------------------------------------------------------------------
			|\\\																///|
			|\\\					Hardware interface							///|
			------------------------------------------------------------------------
***********************************************************************************************************************/
#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_gpio.h"
#include "main.h"

#if 1
/****************************************************************************************
		//Use the HAL library function definition
*****************************************************************************************/

//SPI
#define SPI_MOSI_0		HAL_GPIO_WritePin(SPI1_MOSI_GPIO_Port, SPI1_MOSI_Pin, GPIO_PIN_RESET)
#define SPI_MOSI_1		HAL_GPIO_WritePin(SPI1_MOSI_GPIO_Port, SPI1_MOSI_Pin, GPIO_PIN_SET)

#define is_SPI_MISO		HAL_GPIO_ReadPin(SPI1_MISO_GPIO_Port, SPI1_MISO_Pin)

#define SPI_SCK_0		HAL_GPIO_WritePin(SPI1_SCK_GPIO_Port, SPI1_SCK_Pin, GPIO_PIN_RESET)
#define SPI_SCK_1		HAL_GPIO_WritePin(SPI1_SCK_GPIO_Port, SPI1_SCK_Pin, GPIO_PIN_SET)

#include "LCD.h"
//LCD
#define LCD_CS_0		HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_RESET)
#define LCD_CS_1		HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_SET)

#define LCD_RST_0		HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin, GPIO_PIN_RESET)
#define LCD_RST_1		HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin, GPIO_PIN_SET)

#define LCD_DC_0		HAL_GPIO_WritePin(LCD_DC_GPIO_Port, LCD_DC_Pin, GPIO_PIN_RESET)
#define LCD_DC_1		HAL_GPIO_WritePin(LCD_DC_GPIO_Port, LCD_DC_Pin, GPIO_PIN_SET)

#define LCD_BL_0		HAL_GPIO_WritePin(LCD_BL_GPIO_Port, LCD_BL_Pin, GPIO_PIN_RESET)
#define LCD_BL_1		HAL_GPIO_WritePin(LCD_BL_GPIO_Port, LCD_BL_Pin, GPIO_PIN_SET)

/*-----------------------------------------------------------------------------*/
#else
/*******************************************************************************
		//Use register definition
*******************************************************************************/
//SPI
#define SPI_MOSI_0		GPIOA->BRR=1<<7
#define SPI_MOSI_1		GPIOA->BSRR=1<<7

#define is_SPI_MISO		HAL_GPIO_ReadPin(SPI1_MISO_GPIO_Port, SPI1_MISO_Pin)

#define SPI_SCK_0		GPIOA->BRR=1<<5
#define SPI_SCK_1		GPIOA->BSRR=1<<5

//LCD
#define LCD_CS_0		GPIOB->BRR=1<<6
#define LCD_CS_1		GPIOB->BSRR=1<<6

#define LCD_RST_0		GPIOA->BRR=1<<9
#define LCD_RST_1		GPIOA->BSRR=1<<9

#define LCD_DC_0		GPIOA->BRR=1<<8
#define LCD_DC_1		GPIOA->BSRR=1<<8
	

/*-----------------------------------------------------------------------------*/
#endif

/*------------------------------------------------------------------------------------------------------*/
uint8_t SPI_Write_Byte(uint8_t value);
uint8_t SPI_Read_Byte(uint8_t value);
void Driver_Delay_ms(uint32_t xms);
void Driver_Delay_us(uint32_t xus);

#endif
