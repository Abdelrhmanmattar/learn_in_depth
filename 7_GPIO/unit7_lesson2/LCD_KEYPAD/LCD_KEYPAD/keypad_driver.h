

#ifndef KEYPAD_DRIVER_H_
#define KEYPAD_DRIVER_H_

#define NOTPRESSED 0xff

#include <avr/io.h>
#include "std_macros.h"
//define the port will be used
#define PORT_CHAR D
//connect the char of port to DDRx and PORTx
#define  KEY_PAD_DDR CONCAT(DDR, PORT_CHAR)
#define  KEY_PAD_PORT CONCAT(PORT, PORT_CHAR)
#define  KEY_PAD_PIN CONCAT(PIN, PORT_CHAR)



void keypad_vInit();
char keypad_u8check_press();
#endif /* KEYPAD_DRIVER_H_ */