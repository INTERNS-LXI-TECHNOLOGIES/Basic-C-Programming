#include <stdio.h>
void prime(int);
int main(){
	int num1;
	printf(" the prime number are:\n");
		for(num1=10+1;num1<=100-1;num1++){
	//scanf("%d",&num1);
			
	prime(num1);
			}

	return 0;
	}
	
	void prime (int num2){
		int i,fact;
	
		for(i=2;i<num2;i++){
			if(num2%i==0)	
			break;
			}
			if(i==num2)
	printf("\n prime number %d ",num2);
		
	
			
		//sum++;
		}
