#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
int n,temp,i,p=0;
printf("Enter a number:");
scanf("%d",&n);
temp = n;
for(i=1;i<=n-1;i++)
{
	if(n % i == 0)
	{
		p = p + i;
	}
}

if(p==temp)
{
	printf("Perfect number");
}
else
{
	printf("not perfect");
}
}