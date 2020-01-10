#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int);
void main()
{
double n,i=1,sum=0.0;
printf("Enter the limit:");
scanf("%lf",&n);
	

while(i<=n)
{
	
	sum =  sum+ (1.0)/fact(i);
	
	i++;
	
}
printf("%lf",sum);
}

int fact(int n)
	{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
