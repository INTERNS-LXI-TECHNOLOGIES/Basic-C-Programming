#include <stdio.h>
int main()
{
	int a,b,c,d,i,e;
	a=0;
	b=1;
	printf("Enter a number\n");
	scanf("%d",&d);
	for(i=1;i<=d;i++)
	{
	printf("%d,",a);
		e=a+b;	
		a=b;
		b=e;
	}
	}
