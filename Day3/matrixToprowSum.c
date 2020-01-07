#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
	for(i=0;i<1;i++)
	{
		for(j=0;j<c;j++)
		{
			sum = sum + a[i][j];
				
		}
		printf("\n");
		
	}
	printf("%d",sum);
	
}