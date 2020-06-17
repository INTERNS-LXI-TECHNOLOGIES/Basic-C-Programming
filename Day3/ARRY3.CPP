#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,arr[100],odd,even;
clrscr();
printf("\n enter the numbers: "):
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
even=arr[i];
}
else
{
odd=arr[i];
}
}
printf("\n the even numbers: %d",even);
printf("\n the odd numbers: %d",odd);
getch();
}
