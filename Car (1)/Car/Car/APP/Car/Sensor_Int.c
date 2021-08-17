/*
 * Sensor_Int.c
 *
 * Created: 16-Aug-21 7:22:31 PM
 *  Author: ayman
 */ 
#include "Sensor_Int.h"
float32_t distance;
uint8_t SensorGetDistance(float32_t* Sensor_distance)
{
	(*Sensor_distance)=distance;
	return E_OK;
}
uint8_t SensorSetdistance(float32_t Sensor_distance)
{
	if(distance<0)
	{
		return E_NOK;
	}
	else
	{
		distance=Sensor_distance;
		return E_OK;
	}

}