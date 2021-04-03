#include <stdio.h>
int main()
{
	int i,num,limit,arryValue[100],sum=0;
	//printf("Enter limit\n");
	//scanf("%d",&limit);
	printf("Enter 10 Arry value to find sum\n");
	for(i=0;i<10;i++)
	
		
		scanf("%d\n",&arryValue[i]);
		for(i=0;i<10;i++)
	{
		
		
		sum=sum+arryValue[i];
	}
	printf("%d is the sum",sum);
	}
