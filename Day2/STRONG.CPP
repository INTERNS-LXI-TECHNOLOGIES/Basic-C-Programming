#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,n,j,r,fact,i,sum;
clrscr();
printf("\n enter the lower limit: ");
scanf("%d",&a);
printf("\n enter the upper limit:" );
scanf("%d",&b);
printf("\n the strong numbers between %d and %d is",a,b);
for(i=a;i<=b;i++)
{
n=i;
sum=0;
while(n>0)
{
fact=1;
r=n%10;
for(j=1;j<=r;j++)
{
fact=fact*j;
}
sum=sum+fact;
n=n/10;
}
if(sum==i)
{
printf(" %d",i);
}
}
getch();
}

