#include<stdio.h>
int addn(int a,int b);

int main()
{
int result,num1,num2;
printf("enter two numbers");
scanf("%d %d",&num1,&num2);
result=addn(num1,num2);
printf("%d",result);
}
int addn(int a,int b)
{
int sum;
sum=a+b;
return sum;
}

