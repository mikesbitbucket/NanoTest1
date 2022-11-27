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

// get/set RA0 aliases
#define RA0_TRIS                 TRISAbits.TRISA0
#define RA0_LAT                  LATAbits.LATA0
#define RA0_PORT                 PORTAbits.RA0
#define RA0_WPU                  WPUAbits.WPUA0
#define RA0_OD                   ODCONAbits.ODCA0
#define RA0_ANS                  ANSELAbits.ANSELA0
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()           PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define RA0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define RA0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA1 aliases
#define RA1_TRIS                 TRISAbits.TRISA1
#define RA1_LAT                  LATAbits.LATA1
#define RA1_PORT                 PORTAbits.RA1
#define RA1_WPU                  WPUAbits.WPUA1
#define RA1_OD                   ODCONAbits.ODCA1
#define RA1_ANS                  ANSELAbits.ANSELA1
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()           PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define RA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define RA1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define RA1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define RA2_TRIS                 TRISAbits.TRISA2
#define RA2_LAT                  LATAbits.LATA2
#define RA2_PORT                 PORTAbits.RA2
#define RA2_WPU                  WPUAbits.WPUA2
#define RA2_OD                   ODCONAbits.ODCA2
#define RA2_ANS                  ANSELAbits.ANSELA2
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()           PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define RA2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 aliases
#define RA3_TRIS                 TRISAbits.TRISA3
#define RA3_LAT                  LATAbits.LATA3
#define RA3_PORT                 PORTAbits.RA3
#define RA3_WPU                  WPUAbits.WPUA3
#define RA3_OD                   ODCONAbits.ODCA3
#define RA3_ANS                  ANSELAbits.ANSELA3
#define RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()           PORTAbits.RA3
#define RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define RA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define RA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define RA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define RA3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define RA3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RA4 aliases
#define RA4_TRIS                 TRISAbits.TRISA4
#define RA4_LAT                  LATAbits.LATA4
#define RA4_PORT                 PORTAbits.RA4
#define RA4_WPU                  WPUAbits.WPUA4
#define RA4_OD                   ODCONAbits.ODCA4
#define RA4_ANS                  ANSELAbits.ANSELA4
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()           PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define RA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define RA4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define RA4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define RA5_TRIS                 TRISAbits.TRISA5
#define RA5_LAT                  LATAbits.LATA5
#define RA5_PORT                 PORTAbits.RA5
#define RA5_WPU                  WPUAbits.WPUA5
#define RA5_OD                   ODCONAbits.ODCA5
#define RA5_ANS                  ANSELAbits.ANSELA5
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()           PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define RA5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define RA5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 aliases
#define RA6_TRIS                 TRISAbits.TRISA6
#define RA6_LAT                  LATAbits.LATA6
#define RA6_PORT                 PORTAbits.RA6
#define RA6_WPU                  WPUAbits.WPUA6
#define RA6_OD                   ODCONAbits.ODCA6
#define RA6_ANS                  ANSELAbits.ANSELA6
#define RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define RA6_GetValue()           PORTAbits.RA6
#define RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define RA6_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define RA6_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define RA6_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define RA6_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define RA6_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define RA6_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 aliases
#define RA7_TRIS                 TRISAbits.TRISA7
#define RA7_LAT                  LATAbits.LATA7
#define RA7_PORT                 PORTAbits.RA7
#define RA7_WPU                  WPUAbits.WPUA7
#define RA7_OD                   ODCONAbits.ODCA7
#define RA7_ANS                  ANSELAbits.ANSELA7
#define RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RA7_GetValue()           PORTAbits.RA7
#define RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define RA7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define RA7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define RA7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define RA7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define RA7_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define RA7_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set BACKPWR aliases
#define BACKPWR_TRIS                 TRISDbits.TRISD2
#define BACKPWR_LAT                  LATDbits.LATD2
#define BACKPWR_PORT                 PORTDbits.RD2
#define BACKPWR_WPU                  WPUDbits.WPUD2
#define BACKPWR_OD                   ODCONDbits.ODCD2
#define BACKPWR_ANS                  ANSELDbits.ANSELD2
#define BACKPWR_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define BACKPWR_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define BACKPWR_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define BACKPWR_GetValue()           PORTDbits.RD2
#define BACKPWR_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define BACKPWR_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define BACKPWR_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define BACKPWR_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define BACKPWR_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define BACKPWR_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define BACKPWR_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define BACKPWR_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set LCDPWR aliases
#define LCDPWR_TRIS                 TRISDbits.TRISD3
#define LCDPWR_LAT                  LATDbits.LATD3
#define LCDPWR_PORT                 PORTDbits.RD3
#define LCDPWR_WPU                  WPUDbits.WPUD3
#define LCDPWR_OD                   ODCONDbits.ODCD3
#define LCDPWR_ANS                  ANSELDbits.ANSELD3
#define LCDPWR_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LCDPWR_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LCDPWR_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LCDPWR_GetValue()           PORTDbits.RD3
#define LCDPWR_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LCDPWR_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LCDPWR_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define LCDPWR_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define LCDPWR_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define LCDPWR_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define LCDPWR_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define LCDPWR_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set LCD_RS aliases
#define LCD_RS_TRIS                 TRISDbits.TRISD5
#define LCD_RS_LAT                  LATDbits.LATD5
#define LCD_RS_PORT                 PORTDbits.RD5
#define LCD_RS_WPU                  WPUDbits.WPUD5
#define LCD_RS_OD                   ODCONDbits.ODCD5
#define LCD_RS_ANS                  ANSELDbits.ANSELD5
#define LCD_RS_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define LCD_RS_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define LCD_RS_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define LCD_RS_GetValue()           PORTDbits.RD5
#define LCD_RS_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define LCD_RS_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define LCD_RS_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define LCD_RS_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define LCD_RS_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define LCD_RS_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define LCD_RS_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define LCD_RS_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set LCD_RW aliases
#define LCD_RW_TRIS                 TRISDbits.TRISD6
#define LCD_RW_LAT                  LATDbits.LATD6
#define LCD_RW_PORT                 PORTDbits.RD6
#define LCD_RW_WPU                  WPUDbits.WPUD6
#define LCD_RW_OD                   ODCONDbits.ODCD6
#define LCD_RW_ANS                  ANSELDbits.ANSELD6
#define LCD_RW_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LCD_RW_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LCD_RW_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LCD_RW_GetValue()           PORTDbits.RD6
#define LCD_RW_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LCD_RW_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define LCD_RW_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define LCD_RW_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define LCD_RW_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define LCD_RW_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define LCD_RW_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define LCD_RW_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set LCD_E aliases
#define LCD_E_TRIS                 TRISDbits.TRISD7
#define LCD_E_LAT                  LATDbits.LATD7
#define LCD_E_PORT                 PORTDbits.RD7
#define LCD_E_WPU                  WPUDbits.WPUD7
#define LCD_E_OD                   ODCONDbits.ODCD7
#define LCD_E_ANS                  ANSELDbits.ANSELD7
#define LCD_E_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LCD_E_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LCD_E_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LCD_E_GetValue()           PORTDbits.RD7
#define LCD_E_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LCD_E_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define LCD_E_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define LCD_E_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define LCD_E_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define LCD_E_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define LCD_E_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define LCD_E_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

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