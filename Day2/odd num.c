#include<stdio.h>
main()
{
	int i=200;
	printf("Odd numbers between 6 and 200");
	printf("\n****For Loop****\n");
	for(;i>6;i--)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
	}
	printf("\n****While Loop****\n");
	i=200;
	while(i>6)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
		i--;
	}
	
}
