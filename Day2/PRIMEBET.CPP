#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,i,j,flag;
clrscr();
printf("\n enter the value for a and b: ");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
}
}
if(flag==0)
{
printf("\n %d",i);
}
}
getch();
}
