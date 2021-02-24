/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <math.h>
#include<stdio.h>
int main()
{
   
   int hour,minutes,seconds,a,b,c,d,e,f;
   printf("enter the given minutes: ");
   scanf("%d",&a);
   hour=a/60;
   printf("hours in %d minutes  is %d hour",a,hour);
   b=hour*60;
   c=a%60;
   printf("\n remaining minutes is %d",c);
   return 0;
   
}