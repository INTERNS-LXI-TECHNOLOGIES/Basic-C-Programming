#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int a[2][2],transpose[2][2];
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("\n enter the elements a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\n the transpose of a matrix: ");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
transpose[j][i]=a[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf(" %d",transpose[i][j]);
}
printf("\n");
}
getch();
}
