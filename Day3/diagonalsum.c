#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10];
	int i,j,r,c,sum=0;
	
	printf("enter the no of rows");
	scanf("%d",&r);
	
	printf("enter the no of columns");
	scanf("%d",&c);
	
	printf("enter elemnts to the matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
			}	
			printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				sum=sum+matrix[i][j];
				
			}
		}
	}
	
	printf("The sum of the diagonal elements are %d",sum);
	
}
