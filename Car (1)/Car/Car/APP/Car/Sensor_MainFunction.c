/*
 * Sensor_MainFunction.c
 *
 * Created: 16-Aug-21 7:20:39 PM
 *  Author: ayman
 */ 
#include "Sensor_MainFunction.h"
#include "Sensor_Int.h"
#include "../../ECUAL/ULTRASONIC/Ultrasonic.h"
float32_t Sensor_distance;
void Sensor_MainFunction(void)
{
	ULTRASONIC_GetDist(&Sensor_distance);
	SensorSetdistance(Sensor_distance);
}