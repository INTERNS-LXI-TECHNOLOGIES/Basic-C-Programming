#include <stdio.h>
int prime(int);
int main(){
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
	prime(num1);
	if(prime(num1)==2){
	printf("\n prime number");
		}
	else
	printf("\n not a prime number");
	return 0;
	}
	int prime (int num2){
		int i,r,temp,fact,sum=0;
		for(i=1;i<=num2;i++){
			if(num2%i==0)
			sum++;
		}
		return sum;
		}
