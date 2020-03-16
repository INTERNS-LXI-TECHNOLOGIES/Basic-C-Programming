#include<stdio.h>
main()
{
	float sales,c;
	int i;
	for(i=1;i<16;i++)
	{
		printf("\nEnter the Details of %d th salesman ", i);
		printf("\nSales = ");
		scanf("%f",&sales);
		
		if(sales<10000)
		{
			c=0;
			printf("commision = %f", c);
		}
		else if((sales>=10000.0) && (sales <30000.0))
		{
			c=sales*0.15;
			printf("commision = %f", c);
		}
		else
		{
			c=(sales*0.25) + 1000;
			printf("commision = %f", c);
			
		}
		
	}
}
