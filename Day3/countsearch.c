#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s,a[20];
printf("\n enter the value for n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the %d element",i+1);
scanf("%d",&a[i]);
}
printf("\n enter the number to search: ");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("\n %d present at the location %d",s,i);
break;
}
}
if(a[i]!=s)
{
printf("\n %d is not present",s);
}
}