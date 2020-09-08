#include<stdio.h>
void main()
{
int a[10],i,n,sum=0;
printf("Enter the number of elements \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the %d element \n",i+1);
scanf("%d",&a[i]);

sum=sum+a[i];
}
printf("The sum is %d \n",sum);
}
