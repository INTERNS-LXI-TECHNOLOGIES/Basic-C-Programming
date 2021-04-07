#include <stdio.h>
int main(){
	int r,c;
	printf("Enter row and coloms\n");
	scanf("%d %d",&r,&c);
	int A[r][c],i,j,temp;
	printf("Enter 4 digits for matrix \n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	//if(j==c-1)
	scanf("%d\n",&A[i][j]);
	printf("Transpose is :\n");
	
	
		
	
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	//	if(j==c-1)
		//if(i<=j){
	/*	temp=A[i][j];
	//	A[i][j]=A[j][i];
		A[j][i]=A[i][j];
			}*/
		printf("%d\n",A[j][i]);
		}
		}
		}