#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n,fact,x;
double sum=1;
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
printf("\n enter the value for x: ");
scanf("%d",&x);
for(i=1;i<=n;i++)
{
fact=1;
for(j=1;j<=i;j++)
{
fact=fact*j;
}
sum=sum+pow(x,2*i-1)/fact;
}
printf(" %lf",sum);
getch();
}
