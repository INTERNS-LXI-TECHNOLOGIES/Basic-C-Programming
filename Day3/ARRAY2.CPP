#include<conio.h>
#include<stdio.h>
void main()
{
int i,arr[10],sum=0;
clrscr();
printf("\n enter the numbers: ");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("\n the sum is %d",sum);
getch();
}