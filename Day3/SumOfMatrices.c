#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int r,c,i,j,a[10][10],b[10][10],res[10][10];
	printf("Enter no.of rows and columns\n");
	scanf("%d",&r);
	scanf("%d",&c);
	printf("Enter Elements of first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Elements of seccond matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum of two matrices:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j] = a[i][j]+b[i][j];
			printf("%d \t",res[i][j]); 
			
		}
		printf("\n");
	}
	

	
}