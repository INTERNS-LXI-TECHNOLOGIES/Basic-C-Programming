#include <stdio.h>

void main ()

{

int a,count=0,x;

printf("Enter Num");

scanf ("%d",&x);


for(a=x;a>0;a=a/10)

{

count++;

}

printf("Number of digits %d",count);

}