#include <stdio.h>
int main()
{
	int sum=0,i,number;
	printf("Enter a number  :");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		sum=sum+(i*i);
		
	}
	printf("sum of n square number :%d",sum);
	}
	