#include "clock.h"
#include "stdlib.h"

int Hour;
int Second;
int Minute;
	
void Clock_Update(void)
{
	Second = ImportSecond;
	if(Second == 60)
	{
		Minute += Second / 60;
		Second %= 60;
		ImportSecond %= 60;
		
		if(Minute == 60)
		{
			Hour += Minute / 60;
			Minute %= 60;
			
			if(Hour == 24)
			{
				Hour %= 24;
			}
		}
	}
}

void Clock_Print(void)
{
	OLED_ShowNum(1, 1, Hour, 2);
	OLED_ShowString(1, 3, ":");
	OLED_ShowNum(1, 4, Minute, 2);
	OLED_ShowString(1, 6, ":");
	OLED_ShowNum(1, 7, Second, 2);
}



