/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with parameter ,with return value
*******************************************************************************/
#include<stdio.h>
int strong(int x);
int main()
{
    int n,temp,a;
    printf("enter the number: \n");
    scanf("%d",&n);
    
    a=strong(n);
    if(a==1)
    {
        printf("given number  is strong number\n");
    }
    else
    {
        printf("given number  is not strong number \n");
    }
    return 0;
}
int strong(int x)
{
    int r,fact,sum=0,i,temp=x;
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
    if(temp==sum)
    {
     return 1;
    }
    else
    {
        return 0;
    }
   
}