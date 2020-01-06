#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int a,b,c,sum=0,res;
	printf("Enter sum of three numbers:");
	scanf("%d",&sum);
	if(sum>0) {
		b = sum/3;
		a = b-1;
		c = b+1;
	}
	printf("Three Consecutive numbers are:%d \n %d \n %d", a  ,b,c);
}
