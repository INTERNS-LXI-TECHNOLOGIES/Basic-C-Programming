#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,min;
clrscr();
printf("\n enter the value for a: ");
scanf("%d",&a);
printf("\n enter the value for b: ");
scanf("%d",&b);
min=(a>b)?a:b;
while(1)
{
if(min%a==0 && min%b==0)
{
printf("\n the lcm of %d and %d is %d",a,b,min);
break;
}
min++;
}
getch();
}
