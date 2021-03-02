/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it
To generate Fibonacci series

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0,b=1,c,n;
    printf("limit:");
    scanf("%d",&n);
    printf("fibonaccci series..");
    for(int i=0;i<n;i++)
    {
         printf("%d \t",c);
        c=a+b;
        a=b;
        b=c;
                
        
    }
        
    return 0;
}