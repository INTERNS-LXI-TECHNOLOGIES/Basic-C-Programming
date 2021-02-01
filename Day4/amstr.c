#include <stdio.h>
int armstrong(int num)
{
    int temp=num;
    int rem,sum;
    sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp/=10;
    }  
    if(sum==num)
        return 1;   
    else
        return 0;   
}
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
    if(armstrong(number))
        printf("It is an Armstrong number : ",number);
    else
        printf("It is not an Armstrong number :",number);
  return 0;
}