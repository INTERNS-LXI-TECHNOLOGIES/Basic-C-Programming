#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n,temp=0;
int arr[100];
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
printf("\n enter the numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\n the ascending order of the array is: ");
for(i=0;i<n;i++)
{
printf(" %d",arr[i]);
}
getch();
}

