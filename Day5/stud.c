#include <stdio.h>

struct student
 
{

char name[10];int rollno,classno;

};

void main ()

{

struct student st;

printf("Enter the Student Name :");

scanf("%s",&st.name);

printf("Enter Roll no :");

scanf("%d",&st.rollno);

printf("Enter Class no:");

scanf("%d",&st.classno);

printf("\nYour Input details are given below");

printf("\nName :%s",st.name);

printf("\nRoll No :%d",st.rollno);

printf("\nClass No :%d",st.classno);

}