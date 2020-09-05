#include<stdio.h>
void main()
{
int i,j,n;
printf("Enter the number \n");
scanf("%d",&n);
printf("the prime numbers are 2");
for (i=2;i<=n;i++)
{
for(j=2;j<n;j++)
{
if(i%j==0)
break;
else
{
printf("the prime numbers are %d \n",i);
break;
}
}
}
}
