#include<conio.h>
#include<stdio.h>
void main()
{
int sec,min,hour,h,s,m;
clrscr();
printf("\n enter the second to convert: ");
scanf("%d",&sec);
h=(sec/3600);
m=(sec-(3600*h))/60;
s=(sec-(3600*h)-(m*60));
printf("H:M:S - %d:%d:%d ",h,m,s);
getch();
}
