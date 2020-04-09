#include <stdio.h>
void main()
{
	int a, b, lcm, count=1;
	
	printf("\n Enter 2 numbers",a,b);
	scanf("%d%d",&a,&b);
	
	lcm=(a>b) ? a : b;
	
	while(count)
	{
		if(lcm%a == 0 && lcm%b == 0)
		{
			printf("\n The lcm of %d and %d is",a,b,lcm);
			count = 0;
		}
		lcm++;
	}
}	