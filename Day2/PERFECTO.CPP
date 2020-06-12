#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("\n enter the valuse for n: ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
{
printf("\n the number is perfect number");
}
else
{
printf("\n the number is not perfect");
}
getch();
}

