#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
while(n>0)
{
i=n%10;
sum=sum+i;
n=n/10;
}
printf("sum is: %d",sum);
getch();
}
