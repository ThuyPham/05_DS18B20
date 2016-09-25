/*
* 	I build for country life.
* 	Author : Pham Dinh Van
*	----------------%-------------------
*	
*/

#include "io430.h"
#include "ds18B20IAR.h"
#include "UART.h"

void main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  
  BCSCTL1 = CALBC1_1MHZ;
  DCOCTL = CALDCO_1MHZ;

  UART_Init(); 

  float tmp = 0;

  while(1){
  UART_Write_String("Nhiet do phong = ");
  tmp = ReadTemperature();
  UART_Write_Float(tmp,5);
  UART_Write_Char('\n');
  delay_18B20(1000);
  }
  
}
