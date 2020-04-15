#include<stdio.h>
void main()
{
	int i,j;
	printf("the pattern is \n");
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" * ");
		
		}
		printf("\n");
	}
}
