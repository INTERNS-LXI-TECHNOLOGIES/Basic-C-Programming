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
	for(i=0;i<y;i++)
	{
		sum+=a[0][i];
	}
	
	printf("\n Sum of top row = %d",sum);
	
	
}


