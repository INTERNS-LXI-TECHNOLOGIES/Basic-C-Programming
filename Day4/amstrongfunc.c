#include<stdio.h>

int amstrng(int n);

int main()
{
int a;
printf("Enter the number \n");
scanf("%d",&a);
amstrng(a);
return 0;
}
int amstrng(int n)
{
int temp,sum=0,r;
temp = n;
while( n!=0 )
{
r = n % 10;
sum = sum+ r*r*r;
n=n/ 10;
}
if (sum==temp)
{
printf("It is Amstrong \n");}
else if(sum!=temp){
printf("It is not Amstrong \n");
}
}
