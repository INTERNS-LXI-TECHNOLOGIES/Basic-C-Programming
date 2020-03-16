#include<stdio.h>
#include<conio.h>
void main()
{
	int sales;
	float commision;
	printf("enter the sales");
	scanf("%d",&sales);
	

	 if(sales>=10000 && sales<=30000)
	{
		commision=sales*0.15;
		printf("The commision is %f",commision);
	}
	else if(sales>=30000)
	{
		commision=sales*(25/100)+1000;
		printf("The commision is %f",commision);
	}
	else
	{
		printf("no commision ");
	}
				
}
