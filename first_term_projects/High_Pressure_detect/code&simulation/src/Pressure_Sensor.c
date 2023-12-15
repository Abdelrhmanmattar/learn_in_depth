#include "Pressure_Sensor.h"


vuint32 Pval=0;
const vuint32 Sampling_time=1000;

state Pressure_Sensor_state;
void (*pressure_next_state)(void);

void Pressure_Sensor_init(void)
{
    Pressure_Sensor_state = reading;
    pressure_next_state = STATE(reading);
}

STATE_DEFINE(reading)
{
    Pval = (uint32)getPressureVal();
    send_Pressure_Value(Pval);
    Pressure_Sensor_state = reading;
    pressure_next_state = STATE(waiting);
}

STATE_DEFINE(waiting)
{
    Pressure_Sensor_state = waiting;
    Delay(1000);
    pressure_next_state = STATE(reading);
}