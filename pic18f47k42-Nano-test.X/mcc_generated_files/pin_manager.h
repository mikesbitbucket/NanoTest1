/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED aliases
#define LED_TRIS                 TRISEbits.TRISE0
#define LED_LAT                  LATEbits.LATE0
#define LED_PORT                 PORTEbits.RE0
#define LED_WPU                  WPUEbits.WPUE0
#define LED_OD                   ODCONEbits.ODCE0
#define LED_ANS                  ANSELEbits.ANSELE0
#define LED_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LED_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LED_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LED_GetValue()           PORTEbits.RE0
#define LED_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LED_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LED_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set TEST aliases
#define TEST_TRIS                 TRISEbits.TRISE1
#define TEST_LAT                  LATEbits.LATE1
#define TEST_PORT                 PORTEbits.RE1
#define TEST_WPU                  WPUEbits.WPUE1
#define TEST_OD                   ODCONEbits.ODCE1
#define TEST_ANS                  ANSELEbits.ANSELE1
#define TEST_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define TEST_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define TEST_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define TEST_GetValue()           PORTEbits.RE1
#define TEST_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define TEST_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define TEST_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define TEST_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define TEST_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define TEST_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define TEST_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define TEST_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set SWITCH aliases
#define SWITCH_TRIS                 TRISEbits.TRISE2
#define SWITCH_LAT                  LATEbits.LATE2
#define SWITCH_PORT                 PORTEbits.RE2
#define SWITCH_WPU                  WPUEbits.WPUE2
#define SWITCH_OD                   ODCONEbits.ODCE2
#define SWITCH_ANS                  ANSELEbits.ANSELE2
#define SWITCH_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define SWITCH_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define SWITCH_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define SWITCH_GetValue()           PORTEbits.RE2
#define SWITCH_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define SWITCH_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define SWITCH_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define SWITCH_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define SWITCH_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define SWITCH_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define SWITCH_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define SWITCH_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/