#include<reg51.h>
#include"main.h"
#include"delay.h"
#include"lcd.h"



void main()
{
	unsigned char i,My_Data[]={"NTR'\0'"};
	Lcd_Init();
	while(1)
	{
		Lcd_Command_Write(0x84);
		for(i=0 ; My_Data[i] != '\0' ; i++);
		{
			Lcd_Data_Write(My_Data[i]);
			Delay(50);
		}
		Delay(100);
		Lcd_Command_Write(0x01);
	}
}
