#include<stdio.h>
int area(int b);
int main()
{
int result,r;
printf("Enter radius \n");
scanf("%d",&r);
result=area(r);
printf("The area of circle with radius is %d\n",result);
}
int area(int b)
{
int a=3.14,ar;
ar=3.14*b*b;
return ar;
}