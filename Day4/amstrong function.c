/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with parameter ,with return value
*******************************************************************************/
#include<stdio.h>
int ams(int x);
int main()
{
    int n,temp,a,s;
    printf("enter the number: \n");
    scanf("%d",&n);
    
    a=ams(n);
    if(a==1)
    {
    printf("it is a amstrong number ");
    }
    else
    {
        printf("it is not an amstrong number ");
    }
    return 0;
}
int ams(int x)
{
    int rem,p,s=0,temp=x;
    while(x>0)
    {
    rem=x%10;
    p=rem*rem*rem;
    s=s+p;
    x=x/10;
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
