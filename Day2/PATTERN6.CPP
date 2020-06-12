#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n,num=1;
clrscr();
printf("\n enter the number of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",num);
}
printf("\n");
num++;
}
getch();
}