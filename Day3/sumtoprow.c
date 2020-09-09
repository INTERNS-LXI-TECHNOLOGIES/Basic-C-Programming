#include<stdio.h>
void main()
{
int i,j,sum;
int a[2][2];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("\n enter the elements a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
sum=0;
for(j=0;j<2;j++)
{
sum=sum+a[0][j];
}
}
printf("\n sum of top row is %d ",sum);
}

