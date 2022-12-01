/* ************************************************************************** */
/** Misc Functions

  @Company
    SupraTech

  @File Name
    misc.c

  @Summary
    Misc functions - timers, etc.

  @Description
    Various button handling functions
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

#include "mcc_generated_files/mcc.h"
#include "misc.h"
#include "global_defs.h"
#include "lcd.h"


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */
/** Descriptive Data Item Name

  @Summary
    Brief one-line summary of the data item.
    
  @Description
    Full description, explaining the purpose and usage of data item.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.
    
  @Remarks
    Any additional remarks
 */
static uint16_t SysTick = 0;
static uint16_t Heartbeat_tmr;
static uint8_t LED_Heartbeat_tmr;
static uint8_t HighVoltage_tmr = 0;
static uint8_t PWMDuty;


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */

/** 
  @Function
    int ExampleLocalFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Description
    Full description, explaining the purpose and usage of the function.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.

  @Precondition
    List and describe any required preconditions. If there are no preconditions,
    enter "None."

  @Parameters
    @param param1 Describe the first parameter to the function.
    
    @param param2 Describe the second parameter to the function.

  @Returns
    List (if feasible) and describe the return values of the function.
    <ul>
      <li>1   Indicates an error occurred
      <li>0   Indicates an error did not occur
    </ul>

  @Remarks
    Describe any special behavior not described above.
    <p>
    Any additional remarks.

  @Example
    @code
    if(ExampleFunctionName(1, 2) == 0)
    {
        return 3;
    }
 */
//static int ExampleLocalFunction(int param1, int param2) {
//    return 0;
//}








/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */


// *****************************************************************************

/** 
  @Function
    IncSysTick 

  @Summary
 Increments the System Tic

  @Remarks
 In SysTic
 */
void IncSysTick(void)
{
    SysTick++;
}

/** 
  @Function
    ClearSysTick 

  @Summary
 Clears the System Tic

  @Remarks
 Clear SysTic
 */
void ClearSysTick(void)
{
    SysTick = 0;
}

// *****************************************************************************

/** 
  @Function
    GetSysTick 

  @Summary
    Gets the current SysTick

  @Remarks
    Get and return current SysTick
 */
uint16_t GetSysTick(void)
{
    uint16_t retval;

    PIE3bits.TMR0IE = 0; // Shut off interrupt
    retval = SysTick;
    PIE3bits.TMR0IE = 1; // turn on interrupt
    return retval;
}

// *****************************************************************************

/** 
  @Function
    DoHeartBeat 

  @Summary
 * Does any heartbeat related tasks - blink LED, etc

  @Remarks
 *  Heartbeat Stuff
 */

void DoHeartBeat()
{
    // Heartbeat check
    if((uint16_t)(GetSysTick() - Heartbeat_tmr) >= LED_HEARTBEAT_INTERVAL)
    {
        Heartbeat_tmr = GetSysTick(); // get new time val
        LED_Toggle(); // Toggle error light
        if(LED_GetValue())
        {
            static uint8_t i=1;
            LCD_Clear();
            LCD_DisplayString("Hello World");
            LCD_SetPos(2,i);
            i++;
            if(i > 9) i=0;
            LCD_DisplayString("Indent Line");
        }
        else
        {
            //LCD_Clear();
        }
    } // End LED Beat
    
}  // end heartbeat
    
//    if(GetSysTick() != Heartbeat_tmr)  // this is simpler with 1 tick per heartbeat - Timer 0 is set to 10 ms
//    {
//        Heartbeat_tmr = GetSysTick(); // get new time val
//        LED_Heartbeat_tmr++;
//        if(LED_Heartbeat_tmr > LED_HEARTBEAT_INTERVAL)
//        {
//            LED_Toggle(); // Toggle error light
//            LED_Heartbeat_tmr = 0;
//        }
//        HighVoltage_tmr++;
//        if(HighVoltage_tmr > 100)  // Change duty every 1000ms
//        {
//            HighVoltage_tmr = 0;
//            PWMDuty++;
//            if(PWMDuty > 0x09) // Start back at 0
//            {
//                PWMDuty = 5;
//            }
//            PWM1S1P1L = PWMDuty;
//            //PWM1_16BIT_SetSlice1Output1DutyCycleRegister(PWMDuty);
//            PWM1_16BIT_LoadBufferRegisters(); // Load registers on next period
//        } 
//        if(HighVoltage_tmr > 100)
//        {
//            HighVoltage_tmr = 0;
//            PWM1CON ^= 0x80; // Toggle enable bit   
//            if(PWMDuty > 100)
//            {
//                PWMDuty = 200;  // Turn off for 2 seconds
//                PWM1_16BIT_Disable();
//            }
//            else
//            {
//                PWMDuty = 1;  // Turn on for 10ms
//                PWM1_16BIT_Enable();
//            }
            // PWM1CON ^= 0x80; // Toggle enable bit
//        }
        
//    }  // end heartbeat

/* *****************************************************************************
 End of File
 */
