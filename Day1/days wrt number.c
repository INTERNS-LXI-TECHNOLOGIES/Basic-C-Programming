/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <math.h>
#include<stdio.h>
void main()
{
    int num;
    printf("enter your number:");
    scanf("%d",&num);
    if(num==0)
    printf("sunday");
    else if(num==1)
    printf("\n monday");
    else if(num==2)
    printf("tuesday");
    else if(num==3)
    printf("wednesday");
    else if(num==5)
    printf("thursday");
    else if(num==6)
    printf("friday");
    else if(num==7)
    printf("saturday");
    else
    printf("not matching");
    
   return 0;
   
}