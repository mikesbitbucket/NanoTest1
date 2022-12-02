/* ************************************************************************** */
/** Descriptive File Name

  @Company
 SupraTech

  @File Name
    lcd.c

  @Summary
    8 bit character display interface functions

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */


#include <xc.h>
#include "lcd.h"
#include "global_defs.h"

#define LCD_RS  LATDbits.LATD5
#define LCD_RW  LATDbits.LATD6
#define LCD_E   LATDbits.LATD7

#define LCD_BUS LATA


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
int global_data;


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
static int ExampleLocalFunction(int param1, int param2) {
    return 0;
}


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
    void lcd_init(void) 

  @Summary
    Brief one-line description of the function.

  @Remarks
    Refer to the example_file.h interface header for function usage details.
 */
void LCD_Init(void)
{
    __delay_ms(15);
    LCD_CmdWriteNoBF(0x38); // Configure the LCD in 8-bit mode, 2 line and 5x7 font
    __delay_ms(5);
    LCD_CmdWriteNoBF(0x38); // Configure the LCD in 8-bit mode, 2 line and 5x7 font
    // 700 us delays might be needed for OLED display
    __delay_us(700);
    LCD_CmdWriteNoBF(0x38); // Configure the LCD in 8-bit mode, 2 line and 5x7 font
    __delay_us(700);
    LCD_CmdWriteNoBF(0x10); // Cursor moves, right shift
    __delay_us(700);
    LCD_CmdWriteNoBF(0x0C); // Display On, Cursor off, Blink off
    __delay_us(700);
    LCD_CmdWriteNoBF(0x06); // Entry Mode set - Increment, no shift
    __delay_us(700);
    LCD_CmdWriteNoBF(0x01); // Clear Display
    __delay_ms(3);
//    LCD_CmdWrite(0x0CF); // Display On and Cursor Off
//    //__delay_us(60);
//    LCD_CmdWrite(0x01); // Clear display screen
//    //__delay_ms(3);
//    LCD_CmdWrite(0x06); // Increment cursor
//    //__delay_us(60);
//    LCD_CmdWrite(0x80); // Set cursor position to 1st line, 1st column
//    //__delay_us(60);
}    // end lcd_init


void LCD_CmdWrite( char cmd)
{
    while (LCD_ReadBF()) continue; // wait for BF to be done
    LCD_BUS = cmd; // Send the command to LCD
    LCD_RS = 0; // Select the Command Register by pulling RS LOW
    LCD_RW = 0 ; // Select the Write Operation by pulling RW LOW
    LCD_E = 1; // Send a High-to-Low Pulse at Enable Pin
    __delay_us(10);
    LCD_E = 0;

    //__delay_ms(1);
}
 
void LCD_CmdWriteNoBF( char cmd)  // Does not check busy flag - used in init
{
    LCD_BUS = cmd; // Send the command to LCD
    LCD_RS = 0; // Select the Command Register by pulling RS LOW
    LCD_RW = 0 ; // Select the Write Operation by pulling RW LOW
    LCD_E = 1; // Send a High-to-Low Pulse at Enable Pin
    __delay_us(10);
    LCD_E = 0;
    //__delay_ms(1);
}
void LCD_Clear(void)
{
    LCD_CmdWrite(0x00); //Clear the LCD
    LCD_CmdWrite(0x01); //Move the cursor to first position
    LCD_CmdWrite(0x80); // need to move posisition to 0,0 for OLED
}

void LCD_Shift_Right(void)
{
    LCD_CmdWrite(0x01);
    LCD_CmdWrite(0x0C);
}
void LCD_Shift_Left(void)
{
    LCD_CmdWrite(0x01);
    LCD_CmdWrite(0x08);
}
 
void LCD_DataWrite( char dat)
{
    while (LCD_ReadBF()) continue;
    LCD_BUS = dat; // Send the data to LCD
    LCD_RS = 1; // Select the Data Register by pulling RS HIGH
    LCD_RW = 0; // Select the Write Operation by pulling RW LOW
    LCD_E = 1; // Send a High-to-Low Pulse at Enable Pin
    __delay_us(10);
    LCD_E = 0;
    //__delay_us(60);

}
 
 

void LCD_DisplayString(char *string_ptr)
{
    while(*string_ptr)
    {
        LCD_DataWrite(*string_ptr++);
    }

}
 

_Bool LCD_ReadBF(void)
{
    char bf;
    
    TRISA = 0xFF; // Change to input
    LCD_RS = 0;
    LCD_RW = 1;
    LCD_E = 1;
    __delay_us(1);
    bf = (PORTA & 0x80);
    LCD_E = 0;
    TRISA = 0x00; // Change to Output
    return bf;
}

void LCD_SetPos(uint8_t row, uint8_t col)
{
    // set the row and column for next input
    // first row is zero, and first column is 0
    // max row is 3, max column is 19
    
    // figure out row offset
    switch (row)
    {
        case 0:
            row = 0;
            break;
        case 1:
            row = 0x40;
            break;
        case 2:
            row = 0x14;
            break;
        case 3:
            row = 0x54;
            break;
        default:
            row = 0;
            break;
    } // end switch
    if(col >19) col = 19;
    while (LCD_ReadBF()) continue; // make sure we can take a command
    LCD_CmdWrite(0x80 + row + col);
}


/* *****************************************************************************
 End of File
 */
