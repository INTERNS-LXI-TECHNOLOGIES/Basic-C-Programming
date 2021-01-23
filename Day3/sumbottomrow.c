#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	int sum =0,r,c,i,j,a[10][10];
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
	printf("sum of row :\n");
	
	for(i=r-1;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum = sum + a[i][j];
				
		}
		printf("\n");
	}
	printf("%d",sum);
}
	