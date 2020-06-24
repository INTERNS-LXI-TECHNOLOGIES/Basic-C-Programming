#include<conio.h>
#include<stdio.h>
void search(int a[],int n,int s)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("\n %d is present at the location %d",s,i);
break;
}
}
if(a[i]!=s)
{
printf("\n %d is not in the array",s);
}
}
void main()
{
int a[100],i,n,s;
clrscr();
printf("\n enter the value for n: ");
scanf("%d",&n);
printf("\n enter the elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the number to search: ");
scanf("%d",&s);
search(a,n,s);
getch();
}
