/*
 * software_timer.h
 *
 *  Created on: Sep 17, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include"main.h"
#include "exercise1.h"

extern int timer_flag[10];

void setTimer(int index, int duration);
void timerRun();



#endif /* INC_SOFTWARE_TIMER_H_ */
