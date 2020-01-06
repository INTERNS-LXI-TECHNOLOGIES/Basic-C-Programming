#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	printf("Odd numbers between 6 and 200 =\n");
	for(i=6;i<=200;i++)
	{
		if(i%2 != 0)
		{
			printf("%d\t",i);
		}
				
	}
	
}