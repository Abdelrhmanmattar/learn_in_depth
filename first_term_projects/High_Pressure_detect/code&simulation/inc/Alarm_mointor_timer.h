#ifndef Alarm_H
#define Alarm_H


#include "state.h"

#include "driver.h"

//states
typedef enum 
{
    Alarm_OFF,
    Alarm_ON,
}
state_Alarm;

//attributes
extern const uint32 Alarm_Duration;

extern void (*alarm_next_state)();
extern state_Alarm State_Alarm;


void Timer_init(void);
STATE_DEFINE(Alarm_ON);
STATE_DEFINE(Alarm_OFF);



#endif