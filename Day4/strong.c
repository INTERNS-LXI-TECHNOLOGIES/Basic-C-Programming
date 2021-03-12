/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.Program to check whether the given number is Strong or not ? (Argument & return type)
*******************************************************************************/
#include<stdio.h>
int strong(int x);
int main()
{
    int n,temp,a;
    printf("enter the number: \n");
    scanf("%d",&n);
    temp=n;
    a=strong(n);
    if(temp==a)
    {
        printf("given number %d is strong number\n",temp);
    }
    else
    {
        printf("given number %d is not strong number \n",temp);
    }
    return 0;
}
int strong(int x)
{
    int r,fact,sum=0,i;
    while(x>0)
    { 
        r=x%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
          fact=fact*i;  
        }
        sum=sum+fact;
        x=x/10;
        
    }
     return sum;
   
}