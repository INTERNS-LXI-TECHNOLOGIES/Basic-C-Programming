#include <stdio.h>
int main()
{
	int i,j,A[5][5],B[5][5],sum=0,r,c;
	printf("Enter Row and Coloms\n");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	printf("enter element in %d,%d:",i+1,j+1);
	scanf("%d",&A[i][j]);}	
	}
	printf("The matrix is\n ");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	printf("%d\t",A[i][j]);
	}
	printf("\n");
	}
	
	for(i=0;i<r;i++){
		if(i==0){
	for(j=0;j<c;j++){
		sum=sum+A[0][j];
		}
		}
		}
		printf("The sum of 1st row is :%d",sum);
		
	
	}
