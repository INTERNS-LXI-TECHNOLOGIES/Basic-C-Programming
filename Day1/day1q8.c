#include <stdio.h>
int main()
{
	int a,b;
	char Square;
	printf("Enter the number :\n");
	scanf("%d",&a);
	b=a*a;
	Square=(b<180)?printf("The square of the number is %d\n",b):printf("wrong entry");
	}