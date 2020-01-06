#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
float min,h,s;
printf("enter time in minutes:");
scanf("%f",&min);
h = min/60;	
printf("time in minutes:%f",h);
s = min*60;
printf("time in seconds:%f",s);
}	
	
  