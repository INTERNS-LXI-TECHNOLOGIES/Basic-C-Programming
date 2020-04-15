#include<stdio.h>
int factorial(int N)
{
	int i;
	int fact=1;
	
	for(i=N; i>=1; i--)
	{
	
		fact= fact*i;
	}
	
	
}

int main()
{
	int i,N;
	float sum;
	
	
	printf("Enter the value of N: ");
	scanf("%d",&N);
	

	sum=0.0;
	
	for(i=1;i<=N;i++)
		sum = sum + ( (float)(i) / (float)(factorial(i)) );
	

	
	printf("Sum of the series is: %f\n",sum);
	
	
}
