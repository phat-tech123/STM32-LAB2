/*
 * exercise1.c
 *
 *  Created on: Sep 18, 2024
 *      Author: Admin
 */

#include "exercise1.h"

void display7SEG(int num){
	 //1
	 switch(num){
	 case 0:
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_SET);
	 break;
	 case 1:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_SET);
	 	 break;
	 case 2:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 3:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 4:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 5:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 6:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 7:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_SET);
	 	 break;
	 case 8:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 9:
	 	 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
	 	 break;
	 }
 }

int state7SEG = STATE1;

void switchLed(){
	switch(state7SEG){
	case STATE1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		display7SEG(1);
		state7SEG = STATE2;
		break;
	case STATE2:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
		display7SEG(2);
		state7SEG = 1;
		break;
	default:
		break;
	}
}

void setClock(){
	switch(state7SEG){
	case STATE1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		display7SEG(1);
		state7SEG = STATE2;
		break;
	case STATE2:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		display7SEG(2);
		state7SEG = STATE3;
		break;
	case STATE3:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		display7SEG(3);
		state7SEG = STATE4;
		break;
	case STATE4:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
		display7SEG(0);
		state7SEG = STATE1;
		break;
	default:
		break;
	}
}

