#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c,d,max;
clrscr();
printf("\n enter the four numbers: ");
scanf("%d %d %d %d",&a,&b,&c,&d);
max=(a>b)?a:b;
max=(max>c)?max:c;
max=(max>d)?max:d;
printf("\n the highest number is: %d",max);
getch();
}