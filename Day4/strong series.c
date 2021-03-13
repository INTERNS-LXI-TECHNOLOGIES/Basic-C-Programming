/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
To generate Strong number from 100 to 1000. ( Argument & not return type).
*******************************************************************************/
#include<stdio.h>
void strong(int x);
int main()
{
    int n;
    strong(n);
    return 0;
}
void strong(int x)
{
    int i,j,sum,rem,fact;
    for(j=100;j<=1000;j++)
    {
        x=j;
        sum=0;
        while(x!=0)
        {
            rem=x%10;
            fact=1;
            for(i=rem;i>=1;i--)
            {
                fact=fact*i;
                
            }
            sum=sum+fact;
            x=x/10;
        }
    if(sum==j)
    printf("strong series from 100 and 1000 is :%d \t",j);
    }
}
