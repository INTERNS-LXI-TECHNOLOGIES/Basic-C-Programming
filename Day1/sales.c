#include<stdio.h>
int main( )
{
	float sales,comm;
	printf("Enter the total sales:");
	scanf("%f", &sales);
	if(sales<10000)
	printf("\n No Commission");
	else if(sales>=10000 && sales<=30000)
	comm=sales*0.15;
	printf("\nCommission : %f ");
	else
	comm=1000+sales*0.25;
	printf("\nCommission : %f ");
	}
	
}
