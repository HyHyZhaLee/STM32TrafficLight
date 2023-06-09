
/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
//Begin define
#define LED_RED_STARTING 7
#define LED_YELLOW_STARTING 2
#define LED_GREEN_STARTING 4

//End define
//Begin include
#include "input_processing.h"
#include "software_timer.h"
#include "input_reading.h"
#include "main.h"
#include "timer.h"
#include "fsm_automatic.h"
#include "display.h"
//End include

//Begin extern
extern int LED_RED_init, LED_YELLOW_init, LED_GREEN_init;
extern int LED_RED_temp, LED_YELLOW_temp, LED_GREEN_temp;
extern int TRAFFIC_MODE;
//End extern

//Begin global function
void toggleLED();
void InitTimerSet();
//End global function

#endif /* INC_GLOBAL_H_ */
