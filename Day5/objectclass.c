#include <stdio.h>

struct student
 
{

char name[10];int rollno,classno;

};

void main ()

{

struct student t1={"Hari",123,4},t2={"Babu",124,4};

printf ("Name %s",t1.name);

printf ("Rollno %d",t1.rollno);

printf ("Class no %d",t1.classno);

}