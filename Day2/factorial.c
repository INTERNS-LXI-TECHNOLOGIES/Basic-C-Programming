/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.program to find factorial of a number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i,fact=1;
    
    printf("number:");
    scanf("%d",&num);
        for(i=1;i<=num;++i)
        {
        fact=fact*i;
        }
    printf("factorial of %d is %d",num,fact);    
    
    return 0;
}