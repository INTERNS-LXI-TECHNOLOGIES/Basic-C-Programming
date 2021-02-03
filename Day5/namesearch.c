#include <stdio.h>

struct student
 
{

char name[10];int rollno,classno,mark1,mark2,mark3;

};

void main ()

{

struct student st[5];

int i;

for(i=0;i<5;i++)

{

printf("Enter the Student Name :");

scanf("%s",&st[i].name);

printf("Enter Roll no :");

scanf("%d",&st[i].rollno);

printf("Enter Class no:");
 
scanf("%d",&st[i].classno);

printf("Enter Mark 1:");

scanf("%d",&st[i].mark1);

printf("Enter Mark 2:");

scanf("%d",&st[i].mark2);

printf("Enter Mark 3:");

scanf("%d",&st[i].mark3);

}

printf("Your Input details are given below\n");

for(i=0;i<5;i++)

{
 
printf("\n Enter Name to be search");

scanf("%s",&n);

for(i=0;i<2;i++)

{

 if(strcmp(n,st[i].name)==0)

 {
 printf("\nName :%s",st[i].name);

printf("\nRoll No :%d",st[i].rollno);

printf("\nClass No :%d",st[i].classno);

printf("\nMark 1 :%s",st[i].mark1);

printf("\nMark 1 :%s",st[i].mark2);

printf("\nMark 1 :%s",st[i].mark3);

}

}