/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
to chechk given number is string number or not?
*******************************************************************************/

#include<stdio.h>
int main()
{
int n1,n2,numer,deno,gcd,lcm,r;
printf("enter 2 numbers: ");
scanf("%d %d",&n1,&n2);
if(n1>n2)
{
numer=n1;
deno=n2;
}
else
{
numer=n2;
deno=n2;
}
r=numer%deno;
while(r!=0)
{
numer=deno;
deno=r;
r=numer%deno;
}
lcm=(n1*n2)/deno;
printf("lcm of %d and %d : %d",n1,n2,lcm);
return 0;
}