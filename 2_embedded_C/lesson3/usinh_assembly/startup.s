/*
 Abdelrhman kamal
 startup file
*/

//sram start address 0x20000000

.section .vectors
.word stack_top
/*.word 0x20001000*/           /* stack pointer */
.word _reset                /*reset handler*/
.word  Vector_handler		/* NMI 		 */
.word  Vector_handler 		/* HARD FAULT 	 */ 
.word  Vector_handler		/* MM FAULT		 */ 
.word  Vector_handler		/* Bus fault 	 */
.word  Vector_handler		/* Usage fault 	 */ 
.word  Vector_handler		/* RESERVED 	 */
.word  Vector_handler 		/* RESERVED	 	 */
.word  Vector_handler		/* RESERVED 	 */
.word  Vector_handler		/* RESERVED		 */
.word  Vector_handler		/* SV call 		 */
.word  Vector_handler		/* Debug reserved  */ 
.word  Vector_handler		/* RESERVED 	 */
.word  Vector_handler		/* PendSV 		 */ 
.word  Vector_handler		/* SysTick 		 */
.word  Vector_handler		/* IRQ0 		 */
.word  Vector_handler		/* IRQ1  		 */
.word  Vector_handler		/* IRQ2 		 */

.section .text

_reset:
    bl main
    b .

.thumb_func

Vector_handler:
    b _reset

