#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int i,n,sum;
i=1;
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
while(n>=i)
{
sum=n*(n+1)*(2*n+1)/6;
i++;
}
printf("\n the sum of squares is: %d ",sum);
getch();
}