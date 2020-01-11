#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int i,r,j,k,x=1,y=0;
	printf("Enter no.of rows:\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
		if(j % 2 == 0)
		{
			printf("1");
		}
		else 
		{
			printf("0");
		}
		
		}
		printf("\n");
	}
}