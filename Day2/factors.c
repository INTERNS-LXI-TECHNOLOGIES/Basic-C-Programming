/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.program to find factors of a number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,fact;
    printf("enter number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
     if(num%i==0)
      {  
          fact=i;
           printf("\n%d",fact);
      }
    }
       
    return 0;
}