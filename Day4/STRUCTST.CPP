#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[20];
int sub1;
int sub2;
int sub3;
}s[5];
int i;
void search(struct student s[5],int)
{
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].sub1);
printf("\n sub2: %d",s[i].sub2);
printf("\n sub3: %d",s[i].sub3);
printf("\n ",search);
}
int total(struct student s[5],int)
{
int total;
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].sub1);
printf("\n sub2: %d",s[i].sub2);
printf("\n sub3: %d",s[i].sub3);
total=s[i].sub1+s[i].sub2+s[i].sub3;
printf("\n total is: %d",total);
return total;
}
float percentage(struct student s[5],int)
{
float total,percentage;
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].sub1);
printf("\n sub2: %d",s[i].sub2);
printf("\n sub3: %d",s[i].sub3);
total=s[i].sub1+s[i].sub2+s[i].sub3;
percentage=(total/300)*100;
printf("\n %f",percentage);
return percentage;
}
void display(struct student s[5])
{
for(i=0;i<5;i++)
{
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].sub1);
printf("\n sub2: %d",s[i].sub2);
printf("\n sub3: %d",s[i].sub3);
}
}
void main()
{
int i,ch,rollno;
int c=0;
clrscr();
for(i=0;i<5;i++)
{
printf("\n enter the roll no:");
scanf("%d",&s[i].rollno);
printf("\n enter the name: ");
scanf("%s",&s[i].name);
printf("\n mark of physics: ");
scanf("%d",&s[i].sub1);
printf("\n mark of chemistry: ");
scanf("%d",&s[i].sub2);
printf("\n mark of maths: ");
scanf("%d",&s[i].sub3);
}
do
{
printf("\n 1.search \n 2.total mark \n 3.percentage \n 4.display all ");
printf("\n enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n enter the rollno of student to be search: ");
       scanf("%d",&s[i].rollno);
       search(s,rollno);
       break;
case 2:printf("\n enter the rollno of the student to find total mark: ");
       scanf("%d",&s[i].rollno);
       total(s,rollno);
       break;
case 3:printf("\n enter the rollno of the student to find percentage: ");
       scanf("%f",&s[i].rollno);
       percentage(s,rollno);
       break;
case 4:printf("\n the records of all students ");
       display(s);
       break;
default:printf("\n invalid choice ");
}
printf("\n do you want to continue (yes=press 1 | no=press 0) : ");
scanf("%d",&c);
}
while(c==1);
getch();
}