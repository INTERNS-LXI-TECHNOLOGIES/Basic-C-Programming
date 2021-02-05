#include <stdio.h>

struct student
 
{

char name[10];int rollno,classno;

};

void main ()

{

struct student t1={"Hari",123,4};

printf ("Name");

scanf("%s",&t1);

printf ("Rollno");

scanf("%d",&t1);

printf ("Class no");

scanf("%d",&t1);

}