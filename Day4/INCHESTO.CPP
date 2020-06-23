#include<conio.h>
#include<stdio.h>
float conv(float inch)
{
float feet;
feet=inch/12;
printf("\n feet value is: %f",feet);
return 0;
}
void main()
{
float a;
clrscr();
printf("\n enter the inches: ");
scanf("%f",&a);
conv(a);
getch();
}
