#include <stdio.h>

struct student
 
{

char name[10];int rollno,classno;

};

void main ()

{

struct student st[2];

int i;
for(i=0;i<2;i++)

{

printf("Enter the Student Name :");

scanf("%s",&st[i].name);

printf("Enter Roll no :");

scanf("%d",&st[i].rollno);

printf("Enter Class no:");
 
scanf("%d",&st[i].classno);

}

for(i=0;i<2;i++)

{

    if(st[i].classno==4)

    {

        printf("\nDetails of 4th std stdnt",st[i].c);
 
       printf("\nName :%s",st[i].name);

printf("\nRoll No :%d",st[i].rollno);

printf("\nClass No :%d",st[i].classno);
  
    }

  
}

}