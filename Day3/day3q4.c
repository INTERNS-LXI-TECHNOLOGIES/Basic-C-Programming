#include <stdio.h>
int main()
{
	int i,limit,arrayValue[100],searchValue,value=0;;
	printf("Enter limit\n");
	scanf("%d",&limit);
	printf("Enter array value\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d\n",&arrayValue[i]);
		
	}
	printf("Enter search value\n");
	scanf("%d",&searchValue);
		for(i=0;i<limit;i++){
			
	if(arrayValue[i]==searchValue){
		value=1;
	//printf("%d search value found\n",searchValue);}
	}
		}
		if(value==1)
		{
			printf("%d search value found\n",searchValue);
		}
		else
		{
			printf("%d search  value not found\n",searchValue);
		}
		
	}

