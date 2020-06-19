#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,sum;
int a[2][2];
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("\n enter the elements a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
sum=0;
for(j=0;j<2;j++)
{
sum=sum+a[1][j];
}
}
printf("\n sum of bottom row is: %d ",sum);
getch();
}