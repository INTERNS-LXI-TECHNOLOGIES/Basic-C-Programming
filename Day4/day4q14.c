#include <stdio.h>
int array(int []);
int main(){
	int c;
	int a[4]={1,15,1};
	c=array(a);
	printf("the sum of array is: %d",c);
	}
	int array(int a[10]){
		int sum=0,i;
		for(i=0;i<4;i++)
		{
		sum=sum+a[i];	
		}
		return sum;
		}