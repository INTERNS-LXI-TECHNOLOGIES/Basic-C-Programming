#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,num;
clrscr();
printf("the odd numbers between 6 and 200");
for(i=6;i<200;i++)
{
if(i%2!=0)
printf("\t %d",i);
}
getch();
}

