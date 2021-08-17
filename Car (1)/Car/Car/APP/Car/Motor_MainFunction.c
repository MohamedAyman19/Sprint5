/*
 * Motor_MainFunction.c
 *
 * Created: 16-Aug-21 7:09:15 PM
 *  Author: ayman
 */ 
#include "Motor_MainFunction.h"
#include "../../ECUAL/Motor/DC_Motor.h"
float32_t Motor_distance;
void Motor_MainFunction(void)
{
	ULTRASONIC_GetDist(&Motor_distance);
	if(Motor_distance > 52)
	{
		DC_MotorStart(MOTOR_RIGHT,70,MOTOR_FORWARD);
		DC_MotorStart(MOTOR_LEFT,70,MOTOR_FORWARD);
		
	}
	else if((Motor_distance >= 48) && (Motor_distance <= 52))
	{
		DC_MotorStart(MOTOR_RIGHT,95,MOTOR_BACKWARD);
		DC_MotorStart(MOTOR_LEFT,95,MOTOR_FORWARD);
		
	}
	else if ((Motor_distance < 48) &&(Motor_distance >= 0))
	{
		DC_MotorStart(MOTOR_RIGHT,70,MOTOR_BACKWARD);
		DC_MotorStart(MOTOR_LEFT,70,MOTOR_BACKWARD);
		
	}
	else
	{
		
	}
}