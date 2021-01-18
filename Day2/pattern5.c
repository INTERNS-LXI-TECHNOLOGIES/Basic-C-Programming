#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int r,i,j,k;
	printf("Enter no.of rows:\t");
	scanf("%d",&r);
	k=1;
	for(i=1;i<=r;i++)
	{
		
		for(j=1;j<=i;j++,k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
}