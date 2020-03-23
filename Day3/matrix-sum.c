#include<stdio.h>
main()
{
	int a[10][10],b[10][10],i,j,x,y;
	printf("Enter the order of matrices \n");
	scanf("%d%d",&x,&y);
	printf("\n Enter the first matrix\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter the Second matrix\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	printf("\n sum of matrix =>\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf(" %d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
