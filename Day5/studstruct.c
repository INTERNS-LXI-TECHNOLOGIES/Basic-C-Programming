#include<stdio.h>

struct student{
char name[20];
int rollno,subj1,subj2,subj3;
}s[5];
int i;
int n;
int m;

void search(struct student s[5],int m)
{
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].subj1);
printf("\n sub2: %d",s[i].subj2);
printf("\n sub3: %d",s[i].subj3);
}

int total(struct student s[5],int m)
{
int total;
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].subj1);
printf("\n sub2: %d",s[i].subj2);
printf("\n sub3: %d",s[i].subj3);
total=s[i].subj1+s[i].subj2+s[i].subj3;
printf("\n total is: %d",total);
return total;
}
float percentage(struct student s[5],int m)
{
float total,percentage;
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].subj1);
printf("\n sub2: %d",s[i].subj2);
printf("\n sub3: %d",s[i].subj3);
total=s[i].subj1+s[i].subj2+s[i].subj3;
percentage=(total/300)*100;
printf("\n percentage is: %f",percentage);
return percentage;
}
void display(struct student s[5])
{
for(i=0;i<5;i++)
{
printf("\n rollno: %d",s[i].rollno);
printf("\n name: %s",s[i].name);
printf("\n sub1: %d",s[i].subj1);
printf("\n sub2: %d",s[i].subj2);
printf("\n sub3: %d",s[i].subj3);
}
}
void main()
{
int i,n,c,rollno;
printf("enter the details \n");
for(i=0;i<5;i++)
{
printf("enter your name"); 
scanf("%s",s[i].name);
printf("enter your roll no:");
scanf("%d",&s[i].rollno);
printf("enter mark 1");
scanf("%d",&s[i].subj1);
printf("enter mark 2");
scanf("%d",&s[i].subj2);
printf("enter mark 3");
scanf("%d",&s[i].subj3); 
}
do
{
printf("enter your choice \n");
printf("\n 1.search \n 2.total marks \n 3.percentage scored \n 4.display the details");
scanf("%d",&n);
switch(n)
{
case 1:printf("Enter the rollno: of the student \n");
	scanf("%d",&s[i].rollno);
	search(s,rollno);
	break;
case 2:printf("Enter thr roll no: to find total marks \n");
	scanf("%d",&rollno);
	total(s,rollno);
	break;
case 3:printf("\n enter the rollno of the student: ");
       scanf("%d",&s[i].rollno);
       percentage(s,rollno);
       break;
case 4:printf("\n the records of all students ");
       display(s);
       break;
default:printf("\n invalid choice ");
}
printf("\n do you want to continue (yes=press1 | no=press0) : ");
scanf("%d",&c);
}
while(c==1);
}

	 

