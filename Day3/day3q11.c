#include <stdio.h>
int main(){
	int r,c;
	printf("Enter row and coloms\n");
	scanf("%d %d",&r,&c);
	int A[r][c],B[r][c],C[r][c],i,j;
	printf("Enter  digits for matrix A\n");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("enter element in %d,%d: ",i+1,j+1);
	
	scanf("%d\n",&A[i][j]);
		}
		}
	printf("Enter 4 digits for matrix B\n");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("enter element in %d,%d: ",i+1,j+1);
	scanf("%d\n",&B[i][j]);
		}
		}
	printf("sum of matrix is \n");
	
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++){
	C[i][j]=A[i][j]+B[i][j];
printf("%d\t",C[i][j]);
		}
		printf("\n");
		}
	}
