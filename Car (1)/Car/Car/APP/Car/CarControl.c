/*
* PWM.c
*
* Created: 8/9/2021 8:07:46 PM
*  Author: Marco
*/
#include "CarControl.h"


float32_t distance;

uint8_t APP_INIT()
{
	LCD_INIT();
	_delay_us(900);
	ULTRASONIC_INIT();
	DC_MotorInit(MOTOR_LEFT);
	DC_MotorInit(MOTOR_RIGHT);
	LCD_WRITE_STRING(STRING_DISTANCE);
	LCD_GOTO_XY(FIRST_ROW, 14);
	LCD_WRITE_STRING(STRING_CM);
	/* Replace with your application code */
	return E_OK;
}

uint8_t APP_UPDATE()
{
	Sensor_MainFunction();
	LCD_MainFunction();
	Motor_MainFunction();
	return E_OK;

}