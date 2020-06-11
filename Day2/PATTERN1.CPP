#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n;
clrscr();
printf("\n enter the number of rows to print: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
