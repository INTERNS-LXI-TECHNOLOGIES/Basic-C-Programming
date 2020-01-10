#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int fact(int);

void main()
{
	int i,x,n,f,p;
	float sum;

	
	printf("Enter value for n =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
		f = fact(i);
		
		int x = 2*1-i;
		p = pow(1,x);
		
		sum = sum + (float) p/f;
		
		
	}
	printf("sum of series :%f\n",sum+1);
		
}


int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}