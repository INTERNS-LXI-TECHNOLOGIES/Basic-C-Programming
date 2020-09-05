#include<stdio.h>
void main()
{
int i,j,n,m;
printf("Enter two numbers \n");
scanf("%d %d",&m,&n);
for (i=m;i<=n;i++)
{
for(j=m;j<n;j++)
{
if(i%j==0)
break;
else
{
printf("The prime numbers are %d \n",i);
break;
}
}
}
}
