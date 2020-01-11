#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int i,r,j;
	printf("Enter no.of rows:\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			printf("*");
		}
	
		printf("\n");
	}
	
}