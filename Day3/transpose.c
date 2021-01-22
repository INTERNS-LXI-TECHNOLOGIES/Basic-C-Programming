#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],i,j,x,y;
	printf("Enter the order of matrices \n");
	scanf("%d%d",&x,&y);
	printf("\n Enter the first matrix \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Transpose of the matrix = \n");
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			printf(" %d ",a[j][i]);
		}
		printf("\n");
	}
	
}