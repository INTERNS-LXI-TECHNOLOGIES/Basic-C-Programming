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
#include <stdio.h>
int main(){
	int r,c;
	printf("Enter row and coloms\n");
	scanf("%d %d",&r,&c);
	int A[10][10],i,j,temp,B[10][10];
	printf("Enter 4 digits for matrix \n");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	
			printf("enter element in %d,%d: ",i+1,j+1);
	
	scanf("%d\n",&A[i][j]);
		}
		}
		printf("Matrix is:\n");
		for (i = 0; i < r; i++){
    for (j = 0; j < c; j++){
     printf("%d\t",A[i][j]);
     }
		printf("\n");
		}
		
	printf("\nTranspose is :\n");
	 
	
		
	
	for(i=0;i<c;i++){
	for(j=0;j<r;j++)
		
	
	
		printf("%d\t",A[j][i]);
			
		
  
		
	printf("\n");	  
		}
		}
	for(j=0;j<c;j++){
		sum=sum+A[0][j];
		}
		}
		}
		printf("The sum of 1st row is :%d",sum);
		
	
	}
