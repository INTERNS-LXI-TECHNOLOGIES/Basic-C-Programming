#include<stdio.h>
void main()
{
int hr,mt,sec;
printf("enter the minute");
scanf("\n %d",&mt);
hr=mt/60;
sec=mt*60;
printf("\n the time in hr's is: %d \n",hr);
printf("\n the time in sec's is: %d \n",sec);
}

