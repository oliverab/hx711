/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSELB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSELB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RE0 aliases
#define IO_DT_TRIS                 TRISEbits.TRISE0
#define IO_DT_LAT                  LATEbits.LATE0
#define IO_DT_PORT                 PORTEbits.RE0
#define IO_DT_WPU                  WPUEbits.WPUE0
#define IO_DT_OD                   ODCONEbits.ODCE0
#define IO_DT_ANS                  ANSELEbits.ANSELE0
#define IO_DT_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IO_DT_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IO_DT_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IO_DT_GetValue()           PORTEbits.RE0
#define IO_DT_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IO_DT_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IO_DT_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define IO_DT_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define IO_DT_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define IO_DT_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define IO_DT_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define IO_DT_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set RE1 aliases
#define IO_CK_TRIS                 TRISEbits.TRISE1
#define IO_CK_LAT                  LATEbits.LATE1
#define IO_CK_PORT                 PORTEbits.RE1
#define IO_CK_WPU                  WPUEbits.WPUE1
#define IO_CK_OD                   ODCONEbits.ODCE1
#define IO_CK_ANS                  ANSELEbits.ANSELE1
#define IO_CK_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_CK_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_CK_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_CK_GetValue()           PORTEbits.RE1
#define IO_CK_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_CK_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_CK_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define IO_CK_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define IO_CK_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define IO_CK_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define IO_CK_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define IO_CK_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/