#include <stdio.h>
void main
 ()

{

int a,count=0;

printf("Enter Num");

scanf("%d",&a);

while (a>0)

{

count++;

a=a/10;

}

printf("Number of digits %d",count);

}