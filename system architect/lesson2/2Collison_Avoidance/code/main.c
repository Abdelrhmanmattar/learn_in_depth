#include "MAIN_ALGO.h"
#include "DC_MOTOR.h"
#include "ULTRA_SONIC.h"
void setup() {
    DC_INIT();
    US_INIT();
    main_next_state = STATE(waiting);
    dc_next_state = STATE(DC_IDLE);
    us_next_state = STATE(us_busy);
}
int main() {
    setup();
    while (1) {
        main_next_state();
        dc_next_state();
        us_next_state();
        for (int i = 0; i < 5000; i++);
    }
}
