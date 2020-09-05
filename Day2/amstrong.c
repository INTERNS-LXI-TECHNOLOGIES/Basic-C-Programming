#include<stdio.h>
void main()
{
int n,orgnum,sum=0,r;
printf("Enter the number \n");
scanf("%d",&n);
orgnum=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(sum==orgnum)
printf("The no is amstrong %d \n",n);
else
printf("The no is not palindrome %d \n",n);
}


