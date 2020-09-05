#include<stdio.h>
void main()
{
int n, r,temp,sum=0;
printf("Enter the digits \n");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if (temp==sum)
printf("%d is palindrome",temp);
else
printf("%d is not palindrome",temp);
}
  

