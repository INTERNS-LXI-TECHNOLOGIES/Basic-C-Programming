#include<stdio.h>
main()
{
	float n,i,sum,fact=1,j;
	printf("Enter the value of n\n\t");
	scanf("%f",&n);
	sum=1;
	printf("\n1+");
	int c=1;
	for(i=1;i<n;i++)
	{
		fact=1;
		if(i==n-1)
		{
			printf("(1/%d!) = ",c++);
			
		}
		else
		{
			printf("(1/%d!) + ",c++);
			
		}
		
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+(1/fact);
	}
	printf("%f",sum);
}
