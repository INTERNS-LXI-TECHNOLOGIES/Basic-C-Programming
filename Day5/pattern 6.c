#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int i,r,j,k;
	printf("Enter no.of rows:\n");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{	
		
		for(j=i;j<r;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=r;i>=1;i--)
	{	
		
		for(j=r;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
}