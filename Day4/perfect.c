/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to check whether the given number is perfect or not ? (Argument & return type)
*******************************************************************************/
#include<stdio.h>
int perfect(int x);
int main()
{
    int n,temp,a;
    printf("enter the number : \n");
    scanf("%d",&n);
    temp=n;
    a=perfect(n);
    if(temp==a)
    {
    printf("given number  is perfect number");
    }
    else
    {
        printf("given number  is not perfect number");
    }
    return 0;
}
int perfect(int x)
{
    int fact,sum=0,s;
    for(int i=1;i<=x;i++)
        {
            if(x%i==0)
            {
            fact=i;
            sum=sum+fact;
            s=sum-x;
            }
             
        }
    return s;
}