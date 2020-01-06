#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
int n;
int i,a1=0,a2=1,a3,a4,fib;
printf("Enter the limit:");
scanf("%d",&n);
printf("Fibnocci series\n");
for(i=1;i<=n;i++)
{
	printf("%d\t\n",a1);
	fib = a1+a2;
	a1=a2; 
	a2 = fib;
	
}
}