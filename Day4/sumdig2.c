#include<stdio.h>
void sum(void)
 {
int a,b,sum;
printf("enter the 1st number:");
scanf("%d",&a);
printf("enter the 2nd number:");
scanf("%d",&b);
  sum=a+b;
printf("sum of %d and %d is %d",a,b,sum);
}
int main()
{
sum();
}