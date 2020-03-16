#include<stdio.h>
main()
{
	int n,sum = 0;
	printf("n = ");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum + (n*n);
		n--;
		
	}
	printf("Sum = %d",sum);
}

