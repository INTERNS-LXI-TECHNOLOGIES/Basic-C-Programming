#include<stdio.h>
void main()
{
int sales;
float commision;
printf("\n enter the total sales");
scanf("%d",&sales);
if(sales<10000)
printf("\n no commision \n");
else if(sales>=10000 && sales<30000)
printf("\n commision= %f \n",(sales*0.15));
else
{
commision=(sales*0.25);
printf("\n commision is %f \n",(commision+1000));
}
}
