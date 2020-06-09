#include<conio.h>
#include<stdio.h>
void main()
{
float sales,com;
clrscr();
printf("\n Enter the amount of sales: ");
scanf("%f",&sales);
if(sales>=30000)
{
com=((sales*25)/100)+1000;
printf("\n the commission is: %f ",com);
}
else if(sales<30000 && sales>=10000)
{
com=(sales*15)/100;
printf("\n the commission is: %f",com);
}
else if(sales<10000)
{
printf("\n no commission");
}
getch();
}
