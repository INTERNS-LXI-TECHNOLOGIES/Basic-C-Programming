#include<stdio.h>
#include<conio.h>
void main()
{
	int time,hour,minutes;
	printf("enter the time in minutes");
	scanf("%d",&time);
	hour=time/60;
	minutes=time%60;
	printf("The time is %d,%d",hour,minutes);
	}
