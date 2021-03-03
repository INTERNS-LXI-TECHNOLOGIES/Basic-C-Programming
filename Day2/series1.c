/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
to chechk given number is string number or not?
*******************************************************************************/

#include <stdio.h>

int main()
{
    int limit,num=1,i;
    float sum=1.0,fact;
    
    printf("enter limit:");
    scanf("%d",&limit);
    while(num<=limit)
    {
       fact=1;
        for(int i=1;i<=num;i++)
        {
        fact=fact*i;
        }
        sum=sum+(num/fact);
        num++;
         
     }
     printf("sum: %f",sum);
   
    return 0;
}