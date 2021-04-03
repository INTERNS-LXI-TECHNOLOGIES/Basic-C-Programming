#include <stdio.h>
int main()
{
	int limit,arrayValue[1000],i;
	printf("Enter limit\n");
	scanf("%d",&limit);
	printf("Enter array value\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d\n",&arrayValue[i]);
	}
	for(i=0;i<limit;i++)
	{
		if(arrayValue[i]%2==0)
		{
		printf("%d is an even number\n",arrayValue[i]);	
		
		}
		else
		{
			printf("%d is a odd number\n",arrayValue[i]);
		}
	}
	}

