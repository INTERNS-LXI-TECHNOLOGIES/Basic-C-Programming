#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10];
	int i,j,r,c,sum;
	
	printf("enter the no of rows");
	scanf("%d",&r);
	
	printf("enter the no of columns");
	scanf("%d",&c);
	
	printf("enter the elements to the matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element[%d%d]",i+1,j+1);
			scanf("%d",&matrix[i][j]);		
		}
		
	}
	
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			printf("%d\t",matrix[i][j]);
			sum=sum+matrix[i][j];
		}
		
		printf("\t sum %d",sum);
		printf("\n");
	}
	
	
}
