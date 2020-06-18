#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,search,count;
int arr[100];
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
printf("\n enter the numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n enter the number to search: ");
scanf("%d",&search);
count=0;
for(i=0;i<n;i++)
{
if(arr[i]==search)
count++;
}
printf("\n %d repeating %d times",search,count);
getch();
}