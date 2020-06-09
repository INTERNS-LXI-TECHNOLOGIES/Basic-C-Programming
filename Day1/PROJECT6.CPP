#include<stdio.h>
#include<conio.h>
void main()
{
char sun,mon,tue,wed,thur,fri,sat;
int day;
clrscr();
printf("\n enter the day: ");
scanf("%d",&day);
if(day==0)
{
printf("\n the day is sunday ",sun);
}
else if(day==1)
{
printf("\n the day is monday ",mon);
}
else if(day==2)
{
printf("\n the day is tuesday ",tue);
}
else if(day==3)
{
printf("\n the day is wednesdy ",wed);
}
else if(day==4)
{
printf("\n the day is thursday ",thur);
}
else if(day==5)
{
printf("\n the day is friday ",fri);
}
else if(day==6)
{
printf("\n the day is saturdy ",sat);
}
getch();
}