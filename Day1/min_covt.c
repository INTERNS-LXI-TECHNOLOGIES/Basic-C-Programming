#include <stdio.h>
main() 
{
	int min, h, m, s;
	printf("Input Minutes: ");
	scanf("%d", &min);
	
	h = (min/60); 
	
	m = (min -(60*h));
	
	s = (min -(60*h)-(m));
	
	printf(" %d hr : %d min : %d sec \n",h,m,s);
	
	
}
