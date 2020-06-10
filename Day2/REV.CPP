#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,rev=0;
clrscr();
printf("\ enter the value: ");
scanf("%d",&n);
while(n>0)
{
i=n%10;
rev=(rev*10+i);
n=n/10;
}
printf("the reverse order is: %d ",rev);
getch();
}