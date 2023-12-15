#ifndef Pressure_H
#define Pressure_H

#include "state.h"
#include "driver.h"

//states
typedef enum 
{
    reading,
    waiting,
}
state;

//attributes
extern vuint32 Pval;
extern const vuint32 Sampling_time;


extern state Pressure_Sensor_state;
extern void (* pressure_next_state)(void);

//functions
void Pressure_Sensor_init(void);
STATE_DEFINE(reading);
STATE_DEFINE(waiting);





#endif