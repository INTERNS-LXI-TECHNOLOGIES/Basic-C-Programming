#include<stdio.h>
int strong(int number)
     {
      int i,fact=1;
     for(i=1;i<=number;i++)
     {
          fact=fact*i;
      }
  return fact;
}
int main()
{
       int number,digit,sum=0,temp;
       printf("Enter a number:");
       scanf("%d",&number);
       temp=number;
     while(temp!=0)
     {
          digit=temp%10;
           digit=strong(digit);
         
           sum=sum+digit;
           temp=temp/10;
      }
      if(sum==number)
      {
          printf("It is a Strong Number");
      }
      else
      {
           printf("It is not Strong Number");
      }
    return 0;
}