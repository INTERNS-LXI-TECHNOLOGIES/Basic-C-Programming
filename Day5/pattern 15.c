#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int i,r,j,k=1;
	printf("Enter no.of rows:\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			printf("%d %3",k++);
		}
		printf("\n");
	}
}