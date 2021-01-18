#include<stdio.h>
#include<conio.h>
int main()
{
int i,a,n,b,sum,fact;
printf("enter any number to check strong number:");
scanf("%d",&n);
a=n;
sum=0;
while(n>0)
{
b=n%10;
fact=1;
for(i=1;i<=b;i++)
{
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
if(sum==a)
{
printf("%d is strong number",a);
}
else
{
printf("%d is not strong number",a);
}
return 0;
}