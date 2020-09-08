#include<stdio.h>
void main()
{
int n,i,j,m=1;
printf("Enter the number of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",m);
m++;
}
printf("\n");
}
}
