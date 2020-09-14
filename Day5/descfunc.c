#include<stdio.h>
void descend(int a[5])
{
int i,j,n;
int temp=0;
printf("enter the limit \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the %d value \n",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The descending order of the array is: \n");
for(i=0;i<n;i++)
{
printf(" %d",a[i]);
}
}
void main()
{
int a[5];
descend(a);
}
