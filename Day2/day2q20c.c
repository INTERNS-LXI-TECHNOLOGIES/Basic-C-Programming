#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,i,sum=0;
	printf("Enter a,b\n");
	scanf("%d,%d",&a,&b);
	for(i=1;i<=b;i++)
	{
	sum=sum+pow(a,b);
		sum=sum*-1;	
	}
	printf("%d",sum);
	}

