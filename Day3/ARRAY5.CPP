#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,search;
int arr[100];
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
printf("\n the elements are: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n enter the number to search: ");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(arr[i]==search)
{
printf("\n %d present at the location %d",search,i);
break;
}
}
if(arr[i]!=search)
{
printf("\n %d is not in the array",search);
}
getch();
}