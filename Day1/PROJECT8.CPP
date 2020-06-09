#include<stdio.h>
#include<conio.h>
void main()
{
long int a,b;
clrscr();
printf("\n enter the number: ");
scanf("%ld",&a);
if(a<180)
{
b=a*a;
printf("the square of a is: %ld",b);
}
else
{
printf("the value is greater than 180");
}
getch();
}

