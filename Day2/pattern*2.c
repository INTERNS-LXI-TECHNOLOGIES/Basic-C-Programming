#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter the no of rows \n");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
for(j=n;j>=i;--j)
{
printf("*");
}
printf("\n");
}
}

