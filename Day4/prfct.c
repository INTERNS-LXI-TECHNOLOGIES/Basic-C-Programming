#include<stdio.h>
int perfect(int );
int main()
{

  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  perfect(num);
  
}
int perfect(int num)
{
  int n,sum=0,i;
  n=num;
  for(i=1; i<n; i++)
  {
     if(num%i==0)
        sum=sum+i;
  }
  if(num==sum)
     printf("%d is Perfect Number",num);
  else
     printf("%d is not Perfect Number",num);
     return 0;
}