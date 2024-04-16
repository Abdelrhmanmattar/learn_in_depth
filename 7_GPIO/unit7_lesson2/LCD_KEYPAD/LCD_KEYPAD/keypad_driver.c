
 #include "keypad_driver.h"
 void keypad_vInit()
 {
	//set port inputs and output pins
	 KEY_PAD_DDR  = 0x0f;
	 KEY_PAD_PORT = 0xf0;	  
 }
 char keypad_u8check_press()
 {
	 char arr[4][4]={{'7','8','9','/'},{'4','5','6','*'},{'1','2','3','-'},{'A','0','=','+'}};
	 char row,coloumn,x;
	 char returnval=NOTPRESSED;
	 for(row=0;row<4;row++)
	 {
		 KEY_PAD_PORT |=0X0F;
		 CLR_BIT(KEY_PAD_PORT,row);
		 
		 for(coloumn=0;coloumn<4;coloumn++)
		 {
			 x=READ_BIT(KEY_PAD_PIN,(coloumn+4));
			 if(x==0)
			 {
				 returnval=arr[row][coloumn];
				 break;
			 }
		 }
		 if(x==0)
		 {
			 break;
		 }
	 }
	 return returnval ;	 
 }