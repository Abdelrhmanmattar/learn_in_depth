#include "state_machine.h"

void set_up()
{
    //define all drivers and peripherals
    //start DC motor
    current_state = STATE(waiting);
}
void main() {
    set_up();
    while(1)
    {
        current_state();
        for (int i = 0; i < 5000 ; i++);
    }
}
