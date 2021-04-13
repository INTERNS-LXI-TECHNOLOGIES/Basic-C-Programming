#include <stdio.h>
#include <math.h>
int Ams(int);
int main(){
	int a,b;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(a==Ams(a)){
	printf("The number is Amstrong: %d",a);
		
		}
		else
		{
			printf("Not a Amstrong");
		}
	return 0;
	}
	int Ams (int num1){
	
		int sum=0,x,c;
		while(num1!=0){
		
		x=num1%10;
		c=pow(x,3);
		sum=sum+c;	
		num1=num1/10;
			
			
		
		 
			}
			return sum ;
		}
