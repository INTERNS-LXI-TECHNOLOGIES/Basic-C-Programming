#include<stdio.h>
#include<conio.h>
struct employee
{
int empno;
char name[20];
int salary;
int exp;
}e[2];
void increment(struct employee e[2])
{
for(int i=0;i<2;i++)
{
if(e[i].exp>=8)
{
e[i].salary=e[i].salary+1000;
printf("\n the incremented salary of %s is: %d ",e[i].name,e[i].salary);
}
}
}
void main()
{
int i;
struct employee e[2];
clrscr();
for(i=0;i<2;i++)
{
printf("\n enter the employee number: ");
scanf("%d",&e[i].empno);
printf("\n enter the name: ");
scanf("%s",&e[i].name);
printf("\n enter the salary: ");
scanf("%d",&e[i].salary);
printf("\n enter the experience: ");
scanf("%d",&e[i].exp);
}
increment(e);
getch();
}


