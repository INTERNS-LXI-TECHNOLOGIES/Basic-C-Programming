#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter birth date of a,b,c\n");
	scanf("%d,%d,%d",&a,&b,&c);
	
	if((a<=b)&&(a<=c))
	{
		printf("a is the youngest in group");
	}
	if((b<=a)&&(b<=c))
	{
		
		printf("b is the youngest in group");
	}
		if((c<=a)&&(c<=b))
	{
		
		printf("c is the youngest in group");
	}
	}