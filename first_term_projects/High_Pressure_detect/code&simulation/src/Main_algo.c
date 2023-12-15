#include "Main_algo.h"
const uint32 Pressure_threshold=20;
uint32 IS_Pressure_Value_Allow(uint32 Pval)
{
    if(Pval>Pressure_threshold)
    {
        High_Pressure_Detected();
        return 0;
    }
    else
    {
        return 1;
    }
}
void send_Pressure_Value(int Pval)
{
    IS_Pressure_Value_Allow(Pval);
}
