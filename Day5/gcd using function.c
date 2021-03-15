/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 Program to pass two number and find the GCD of two numbers using function.
*******************************************************************************/
#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int n1,n2,a;
    printf("enter 2 numbers: \n");
    scanf("%d %d",&n1,&n2);
    a=gcd(n1,n2);
    printf("GCD of %d and %d is %d",n1,n2,a);
    return 0;
}
int gcd(int x,int y)
{
    int num,deno,rem;
    if(x>y)
     {
      num=x;
      deno=y;
     }
     else
     {
      num=y;
      deno=x;
     }
       rem=num%deno;
       while(rem!=0)
       {
      num=deno;
      deno=rem;
      r=num%deno;
      }
      return deno;
}
