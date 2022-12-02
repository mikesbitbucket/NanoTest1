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
        
        // move line every second
        if(LED_GetValue())
        {
            LCD_DisplayAndShift();
        }
        
        
//        if(LED_GetValue())
//        {
//            static uint8_t i=1;
//            LCD_Clear();
//            LCD_DisplayString("Hello World");
//            LCD_SetPos(2,i);
//            i++;
//            if(i > 9) i=0;
//            LCD_DisplayString("Indent Line");
//        }
//        else
//        {
//            //LCD_Clear();
//        }
    } // End LED Beat
    
}  // end heartbeat
    

// LCD Shift Line
void LCD_DisplayAndShift(void)
{
    static uint8_t i=1,j;
    char nums[] = {'1','2','3','4','5','6','7','8','9'};
    
    LCD_Clear();
    LCD_DisplayString("Equinew NEW!");
    LCD_SetPos(1,0);
    LCD_DisplayString("Best one yet!");
    LCD_SetPos(2,i);
    i++;
    if(i > 9) i=0;
    LCD_DisplayString("Moving Line");
    LCD_SetPos(3,0);
    j++;
    j &= 0x07;
    LCD_DataWrite('A');
    LCD_DataWrite(nums[j]);
    LCD_DataWrite('B');
    LCD_DataWrite(nums[j+1]);
    LCD_DataWrite('C');
    LCD_DataWrite(nums[j+2]);
    
}

/* *****************************************************************************
 End of File
 */
