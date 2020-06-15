#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n,fact;
double sum=1.0;
clrscr();
printf("\n enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=1;
for(j=1;j<=i;j++)
{
fact=fact*j;
}
sum=sum+(1.0/fact);
}
printf(" %lf",sum);
getch();
}
