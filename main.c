 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include <stdio.h>

//------------------------------------------------------------------- 
#define ADDO IO_DT_PORT
#define ADSK IO_CK_LAT
unsigned long ReadCount(void){ 
  unsigned long Count; 
  unsigned char i; 
  ADDO=1;            
  ADSK=0; 
  Count=0; 
  while(ADDO); 
  for (i=0;i<24;i++){ 
    ADSK=1; 
    Count=Count<<1; 
    ADSK=0; 
    if(ADDO) Count++; 
  } 
  ADSK=1; 
  Count=Count^0x800000;  
  ADSK=0; 
  return(Count); 
} 

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    printf("Hello\r\n");
    unsigned long tare=8335700;
    int totenthoz=570;
    while(1)
    {
        unsigned long reading=ReadCount();
      int tenths=(int)((long)(reading-tare)/570l );
      int oz=tenths/10;
      tenths-=oz*10;
      int pounds=oz/16;
      oz-=pounds*16;
      printf("Reading : %lu  Weight:%d pounds %d.%d oz\r\n",reading,pounds,oz,abs(tenths));
      
    }    
}