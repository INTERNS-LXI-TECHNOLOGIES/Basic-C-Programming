#include<stdio.h>
#include<conio.h>
void main()
{
	int r,i,j;
	printf("Enter no.of rows:\t");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf(" \n");
	}
	
}