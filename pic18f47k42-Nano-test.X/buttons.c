/* ************************************************************************** */
/** Misc Functions

  @Company
    SupraTech

  @File Name
    buttons.c

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

#include "global_defs.h"
#include "mcc_generated_files/mcc.h"
#include "misc.h"
#include "buttons.h"




/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */


/* NOTE
 the defintion for debounce time, etc. are moved to global_defs.h
 
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

uint16_t button_tic_tmr;
static uint8_t Button1State = 0;


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
 DoButtons

  @Summary
 Calls all the buttons debounce routines, sets up for a call to them

  @Remarks
 * this does not return any states, just runs the stuff to get the states
 * This is expected to be called every xx ms - 
 * Be sure to define the debounce time, etc at the top of this file
 */

void DoButtons(void)
{
    // Call all the button handler routines
    // See if enough tics have passed....
    if((uint16_t)(GetSysTick() - button_tic_tmr) >= BUTTON_INTERVAL_CHECK)
    {
        button_tic_tmr = GetSysTick();  //get new value
        // OK lets get the button status again
        DoButton1();
        //  add more buttons here
    }
    
}

void DoButton1(void)
{
    // Check button 1 and get status loaded - Button 1 is '0' when pressed
    // This will be called by the DoButtons routine
    Button1State = (uint8_t)(Button1State << 1) | !PB1_GetValue();  // shift in the next bit
    if(Button1State == BUTTON_DEBOUNCE_MASK)
    {
        // this is a transitions to pressed
        if(Button1Pressed_InterruptHandler) // make sure we have something initialized
        {
            Button1Pressed_InterruptHandler(); // Handle the transition of not pressed to pressed
        }
    }
}

bool IsButton1Pressed(void)
{
    uint8_t temp;
    temp = Button1State & BUTTON_DEBOUNCE_MASK;  // mask the lower bits
    temp = temp ^ BUTTON_DEBOUNCE_MASK;   // if this is zero, we have continuous button press
    return (0 == temp);
}

bool IsButton1Released(void)
{
    uint8_t temp = 0;
    temp = Button1State & BUTTON_DEBOUNCE_MASK;  // If button released, should be all zeros
    return (0 == temp);
}
        
void Button1Pressed_SetInterruptHandler(void (* InterruptHandler)(void))
{
    Button1Pressed_InterruptHandler = InterruptHandler;
}

void Button1PressedDefaultInterruptHandler(void)
{
    // Add default code here
}

/* *****************************************************************************
 End of File
 */
