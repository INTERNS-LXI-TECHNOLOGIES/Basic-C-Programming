#include <stdio.h> 

void main() 
{
	int n, i, c = 0;
	printf("\n Enter any number n:",n);
	scanf("%d", &n);

	for (i = 1; i <= n; i++) 
	{
		if (n % i == 0) 
		{
			c++;
		}
  }

	if (c == 2) 
	printf("\n n is a Prime number");
	else 
	printf("\n n is not a Prime number");
  
    
}