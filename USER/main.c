#include "stm32f4xx.h"
#include "delay.h"
#include "led.h"
#include "oled.h"
#include "clock.h"


extern uint8_t ImportSecond;

int main(void){
	
	OLED_Init();
	Timer_Init();

	
	while(1){
		Clock_Update();
		Clock_Print();
	}
}
