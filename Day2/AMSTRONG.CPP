#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,sum=0,temp;
clrscr();
printf("\n enter the number :");
scanf("%d",&n);
temp=n;
while(n>0)
{
i=n%10;
sum=sum+i*i*i;
n=n/10;
}
if(temp==sum)
{
printf("\n the number is amstrong");
}
else
{
printf("\n the number is not amstrong");
}
getch();
}
