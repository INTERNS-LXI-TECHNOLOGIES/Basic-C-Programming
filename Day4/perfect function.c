/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with parameter ,with return value
*******************************************************************************/
#include<stdio.h>
int perfect(int x);
int main()
{
    int n,temp,a;
    printf("enter the number : \n");
    scanf("%d",&n);
   
    a=perfect(n);
    if(a==1)
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
    int fact,sum=0,s, temp=x;
    for(int i=1;i<=x;i++)
        {
            if(x%i==0)
            {
            fact=i;
            sum=sum+fact;
            s=sum-x;
            }
             
        }
        if(temp==s)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
