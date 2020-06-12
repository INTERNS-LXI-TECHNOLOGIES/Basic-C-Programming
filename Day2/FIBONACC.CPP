#include<conio.h>
#include<stdio.h>
void main()
{
int i,a=0,b=1,c,n;
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
printf("\n the fibonacci series is ");
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("\n %d",a);
}
getch();
}

