#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter the input value\n\t");
	scanf("%d",&num);
	if(num<=180)
	{
	
		printf("\nSquare of %d = %d ",num,num*num);
	}
	else
	{
		printf("The entered value(%d) is > 180 ",num);
	}
}
