#include <stdio.h>
#include <stdlib.h>

void main()
{
int n,rem,temp,ams=0;	
printf("enter a number:");
scanf("%d",&n);
temp = n;
while(n>0)
{
	rem = n%10;
	ams = ams+rem*rem*rem;
	n = n/10;
	
}
if(ams == temp)
{

printf("the given number is amstrong");

}
else
{
	printf("the given number is not amstrong");
}
}