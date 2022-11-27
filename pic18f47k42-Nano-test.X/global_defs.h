/* 
 * File:   global_defs.h
 * Author: Mike
 *
 * Created on May 16, 2021, 1:45 PM
 */

#ifndef GLOBAL_DEFS_H
#define	GLOBAL_DEFS_H

#ifdef	__cplusplus
extern "C" {
#endif

#pragma warning disable 520  // Turns off the Function Not Called Warning
#pragma warning disable 2053  // Turns off the Function Not Called Warning - Inline functions
    
#include "mcc_generated_files/mcc.h"
#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
    
#define TRUE 1
#define FALSE 0

    
#define HEARTBEAT_INTERVAL  (0.01)  // seconds for interrupt from systick timer
#define LED_HEARTBEAT_INTERVAL 50  // Interval for heartbeat tick - 50 = 500ms @ 10ms tick
#define BUTTON_CHECK_INTERVAL   1  // we want to check the buttons every 10ms
    

#ifdef	__cplusplus
}
#endif

#endif	/* GLOBAL_DEFS_H */

