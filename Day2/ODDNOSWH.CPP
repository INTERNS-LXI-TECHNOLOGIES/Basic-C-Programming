#include<conio.h>
#include<stdio.h>
void main()
{
int i;
i=6;
clrscr();
printf("the odd numbers between 6 and 200");
while(i<=200)
{
if(i%2!=0)
printf(" \t %d ",i);
i++;
}
getch();
}