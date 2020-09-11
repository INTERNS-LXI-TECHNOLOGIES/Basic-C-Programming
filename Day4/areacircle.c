#include<stdio.h>
int area(int b);

int main()
{
int result,r;
printf("Enter the radius \n");
scanf("%d",&r);
result = area(r);
printf("The area of circle with radius %d is \n",result);
}
int area(int b)
{
int a=3.14,ar;
ar=3.14*b*b;
return ar;
}
