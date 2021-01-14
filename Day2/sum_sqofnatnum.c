#include<stdio.h>
int main()
{
  int num,sum=0,d;
  printf("Enter Number:");
  scanf("%d",&num);
  while(num>0)
  {
  d=num%10;
  sum=sum+(d*d);
  sum=num/10;
  }
  printf("Sum of digit is %d",sum);
  return 0;
}