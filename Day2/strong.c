#include <stdio.h>
void main()
{
int i, orgnum, num, lastDigit, sum;
long fact;
printf("Enter any number to check Strong number: ");
scanf("%d", &num);
orgnum = num;
sum = 0;
while(num > 0)
{
lastDigit = num % 10;
fact = 1;
for(i=1; i<=lastDigit; i++)
{
fact = fact * i;
}
sum = sum + fact;
num = num / 10;
 }
if(sum == orgnum)
{
printf("%d is STRONG NUMBER", orgnum);
}
else
{
printf("%d is NOT STRONG NUMBER", orgnum);
}
}
