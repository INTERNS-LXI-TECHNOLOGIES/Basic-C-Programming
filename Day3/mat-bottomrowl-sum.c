#include<stdio.h>
main()
{
	int a[10][10],i,x,y,sum=0,j;
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
	sum=0;
	for(i=0;i<y;i++)
	{
		sum+= a[x-1][i];
	}
	printf("\n Sum of bottom row = %d",sum);
}
