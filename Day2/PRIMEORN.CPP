#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,flag=0;
clrscr();
printf("\n enter the number: ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
{
flag=1;
}
if(flag==0)
{
printf("\n the given number is prime ");
}
else
{
printf("\n the given number is not prime");
}
getch();
}
}
