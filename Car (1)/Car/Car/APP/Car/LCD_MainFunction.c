/*
 * LCD_MainFunction.c
 *
 * Created: 17-Aug-21 12:04:16 AM
 *  Author: ayman
 */ 

#include "LCD_MainFunction.h"

float32_t LCD_distance;

void LCD_MainFunction()
{
	ULTRASONIC_GetDist(&LCD_distance);
	LCD_GOTO_XY(FIRST_ROW, 10);
	LCD_WRITE_STRING((ptr_uint8_t)"   ");
	LCD_GOTO_XY(FIRST_ROW, 10);
	LCD_WRITE_NUMBER(LCD_distance);
}