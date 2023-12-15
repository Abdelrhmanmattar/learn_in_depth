#include "Alarm_mointor_timer.h"

const uint32 Alarm_Duration = 6000;

void (*alarm_next_state)();
state_Alarm State_Alarm;

void Timer_init(void)
{
    Set_Alarm_actuator(1);
    State_Alarm = Alarm_OFF;
    alarm_next_state = STATE(Alarm_OFF);
}


STATE_DEFINE(Alarm_ON)
{
    State_Alarm = Alarm_ON;
    Set_Alarm_actuator(0);
    Delay(Alarm_Duration);
    alarm_next_state = STATE(Alarm_OFF);

}
STATE_DEFINE(Alarm_OFF)
{
    State_Alarm = Alarm_OFF;
    Set_Alarm_actuator(1);
    alarm_next_state = STATE(Alarm_OFF);
}

void High_Pressure_Detected()
{
    alarm_next_state = STATE(Alarm_ON);
}