/*
 * exercise1.h
 *
 *  Created on: Sep 18, 2024
 *      Author: Admin
 */

#ifndef INC_EXERCISE1_H_
#define INC_EXERCISE1_H_

#include "main.h"


#define STATE1 0
#define STATE2 1
#define STATE3 2
#define STATE4 3



void display7SEG(int num);

void switchLed();

void setClock();



extern int index_led;
void update7SEG(int index);

extern int hour, minute, second;
extern int led_buffer [4];
void updateClockBuffer();


void updateLEDMatrix(int index);
void shiftBuffer();

#endif /* INC_EXERCISE1_H_ */
