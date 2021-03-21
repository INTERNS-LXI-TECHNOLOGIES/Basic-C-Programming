#include <stdio.h>
int main()
{
	int l,u,x,i;
	printf("Enter a number to start from:");
	scanf("%d",&l);
	printf("Enter the  number to end :");
	scanf("%d",&u);
		for(x=l;x<=u;x++)
	{
		for(i=2;i<x;i++)
		{
		if(x%i==0)
			break;
			}
		if(i==x)
			printf("%d\n",x);	
		
	}
	}
	

