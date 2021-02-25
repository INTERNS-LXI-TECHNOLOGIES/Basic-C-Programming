/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int sales,commission;
printf("enter your sales:");
scanf("%d",&sales);
printf("sales:%d",sales);

if(sales<10000)
{

printf("no commission");
}
else if(sales >=10000 && sales <30000)
{
commission=sales*15/100;

printf("commission: %d",commission);
}
else if(sales >=30000 )
{
 commission=(sales*25/100)+1000; 
 printf("commission: %d",commission);
}
else
printf("not found");
    return 0;
}
