/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#include "global.h"
int LED_RED_init = LED_RED_STARTING, LED_YELLOW_init = LED_YELLOW_STARTING, LED_GREEN_init = LED_GREEN_STARTING;
int LED_RED_temp = 0, LED_YELLOW_temp = 0, LED_GREEN_temp = 0;
int TRAFFIC_MODE = 1;

void InitTimerSet(){
	setTimer(2000,0);						//TIMER RUN EVERY SECOND
	setTimer(1000,1);						//TIMER FOR FREQ OF 7SEG LED
	setTimer(1000,2);						//TIMER FOR FREQ OF MODE 2 AND 3
	setTimer(1000,3);						//TIMER FOR TOGGLE_LED
}
