#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,arr[10],larg;
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
printf("\n enter the numbers : ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
larg=arr[0];
for(i=0;i<n;i++)
{

if(arr[i]>larg)
{
larg=arr[i];
}
}
printf("the largest number is: %d ",larg);
getch();
}
