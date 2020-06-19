#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int a[2][2],b[2][2],c[2][2];
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("\n enter the elements of a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("\n enter the elements of b[%d][%d]; ",i,j);
scanf("%d",&b[i][j]);
}
}
printf("\n sum of two matrix is: ");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf(" %d",c[i][j]);
}
printf("\n");
}
getch();
}
