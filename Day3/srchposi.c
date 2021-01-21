#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[i],p;
printf("enter the limit \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %d elements \n",i+1);
scanf("%d",&a[i]);
}
printf("enter the number, to find its position \n");
scanf("%d",&p);
for(i=0;i<n;i++)
{
if(a[i]==p)
{
printf("it is found at position %d",i);
}
}
}
