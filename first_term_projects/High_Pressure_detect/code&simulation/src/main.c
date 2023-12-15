#include <stdio.h>

#include "driver.h"
#include "Pressure_Sensor.h"
#include "Main_algo.h"
#include "Alarm_mointor_timer.h"

void set_up(void)
{
	GPIO_INITIALIZATION();
	Pressure_Sensor_init();
	Timer_init();
}


void main ( void){
	set_up();
	while (1)
	{
		//Implement your Design 
		pressure_next_state();
		alarm_next_state();
	}

}
