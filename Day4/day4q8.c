#include <math.h>
int per(int);
int main(){
	int a,b;
	printf("Enter the number\n");
	scanf("%d",&a);
per(a);
	
		if(a==per(a)){
	printf("The number is perfect: %d",a);
		
		}
		else
		{
			printf("Not a perfect");
		}
	return 0;
	}
	int per (int num1){
	
		int sum=0,x,c,i;
		
		
for(i=1;i<num1;i++)
			{
	
			if(num1%i==0){
				sum=sum+i;
			}
		
		 }
			
			return sum ;
		}
