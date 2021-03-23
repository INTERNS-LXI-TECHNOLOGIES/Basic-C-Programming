#include <stdio.h>
int main()
{
	int x,y=0,b,a;
	printf("Enter a number\n");
	scanf("%d",&x);
	b=x;
	
	while(x!=0)
	{
	a=x % 10;
		y=y*10+a;
		x=x/10;	
	}
	if(y == b)
	printf("The number is  palindrome %d",y);
	else
	printf("The number is not pablindrome %d ",y);
	return 0;
	}
