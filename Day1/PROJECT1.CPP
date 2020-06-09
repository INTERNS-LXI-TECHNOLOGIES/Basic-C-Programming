#include<conio.h>
#include<stdio.h>
void main()
{
long int ch,sec,min,hrs,dys,mon,yrs;
clrscr();
printf("\n 1.second \n 2.minute \n 3.hours \n 4.days \n 5.month \n 6.exit \n enter your choice:");
scanf("%d",&ch);
{
printf("enter year:");
scanf("%d",&yrs);
}
mon=yrs*12;
dys=mon*30;
hrs=min*24;
min=hrs*60;
sec=min*60;
switch(ch)
{
case 1:printf("second: %ld",&sec);
       break;
case 2:printf("minute: %ld",&min);
       break;
case 3:printf("hours: %ld",&hrs);
       break;
case 4:printf("days: %ld",&dys);
       break;
case 5:printf("month: %ld",&mon);
       break;
case 6:printf("exit");
       break;
default:printf("invalid");
}
getch();
}