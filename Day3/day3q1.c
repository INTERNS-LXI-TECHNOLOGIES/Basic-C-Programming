#include <stdio.h>
int main()
{
	int i,num,limit,arryValue[100],Temp=0;
	printf("Enter limit\n");
	scanf("%d",&limit);
	printf("Enter Arry value\n");
	for(i=0;i<limit;i++)
	
		
		scanf("%d\n",&arryValue[i]);
		for(i=0;i<limit;i++)
	{
		
		if(arryValue[i]>Temp)
		{
		Temp=arryValue[i];	
		}
		
	}
	printf("%d is the biggest value",Temp);
	}
