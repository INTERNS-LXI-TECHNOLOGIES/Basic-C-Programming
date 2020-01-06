#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i=6;
	printf("Odd numbers between 6 and 200 =\n");
	while(i<=200)
	{
		if(i%2!=0)
		printf("%d \t",i);
		i++;
	}
	
}