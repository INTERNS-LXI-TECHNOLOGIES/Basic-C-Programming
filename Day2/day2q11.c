#include <stdio.h>
int main()
{
	int a,b,c=0;
	printf("Enter the number\n");
	scanf("%d",&a);
	for(b=1;b<a;b++)
	{
	if(a%b==0)
	c=c+b;
		}
	
	
	if(c==a)
	printf("it is a perfect number %d",c);
	else
	printf("it is not a perfect number %d",c);
	}
