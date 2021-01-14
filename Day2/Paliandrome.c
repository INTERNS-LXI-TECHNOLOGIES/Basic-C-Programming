#include<stdio.h>
int main()
{
  int num,rev=0,d,temp;
  printf("Enter Number:");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
  d=num%10;
  rev=rev*10+d;
  num=num/10;
  }
  printf("Reverse is %d",rev);
  if(rev==temp)
  {printf("\n Number is Paliandrome");
  }
  else
  {
      printf("\n Number is not Paliandrome");
  }
  return 0;
}