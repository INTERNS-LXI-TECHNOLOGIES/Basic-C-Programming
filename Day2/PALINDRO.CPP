#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,rev=0,temp;
clrscr();
printf("\n enter the number: ");
scanf("%d",&n);
temp=n;
while(n>0)
{
i=n%10;
rev=rev*10+i;
n=n/10;
}
if(temp==rev)
{
printf("\n the number is a palindrome ");
}
else
{
printf("\n the number is not palindrome ");
}
getch();
}
