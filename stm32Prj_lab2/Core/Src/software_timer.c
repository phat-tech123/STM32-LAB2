/*
 * software_timer.c
 *
 *  Created on: Sep 17, 2024
 *      Author: Admin
 */

#include "software_timer.h"

int timer_counter[10] = 0;
int timer_flag[10] = 0;

void setTimer(int index, int duration){
	timer_counter[index] = duration;
	timer_flag[index] = 0;
}

void timerRun(){}
