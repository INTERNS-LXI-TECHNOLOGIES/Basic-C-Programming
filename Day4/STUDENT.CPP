#include<conio.h>
#include<stdio.h>
struct student
{
int regno;
char name[20];
int sub1;
int sub2;
int sub3;
float percentage;
float total;
}s[15];
void main()
{
int ch,i,j;
clrscr();
struct student s[15];
printf("\n records of students ");
for(i=0;i<15;i++)
{
printf("\n enter the register number: ");
scanf("%d",&s[i].regno);
printf("\n enter the name: ");
scanf("%s",&s[i].name);
printf("\n enter the mark of physics: ");
scanf("%d",&s[i].sub1);
printf("\n enter the mark of chemistry: ");
scanf("%d",&s[i].sub2);
printf("\n enter the mark of maths: ");
scanf("%d",&s[i].sub3);
s[i].total=s[i].sub1+s[i].sub2+s[i].sub3;
s[i].percentage=(s[i].total/300)*100;
}
printf("\n the passsed students are:");
for(i=0;i<15;i++)
{
if(s[i].percentage>=40)
{
printf("\n %s",s[i].name);
}
}
printf("\n the failed students are: ");
for(i=0;i<15;i++)
{
if(s[i].percentage<40)
{
printf("\n %s",s[i].name);
}
}
getch();
}