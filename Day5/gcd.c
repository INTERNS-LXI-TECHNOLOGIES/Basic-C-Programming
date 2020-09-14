#include<stdio.h>


int gcd(int a,int b)
{
int min,i;
min=a<b?a:b;
for(i=min;i>0;i--)
{
if(a%i==0 && b%i==0)
break;
}
printf(" gcd is : %d",i);
return i;
}
void main()
{
int a,b;
printf("\n enter the two numbers: ");
scanf("%d %d",&a,&b);
gcd(a,b);
}
