#include<stdio.h>
#include<conio.h>
void main()
{
	int x,a;
	printf("enter the input value");
	scanf("%d",&x);
	if(x<180)
	{
		a=x*x;
		printf("the square is %d",a);
	}
	else
	{
		printf("the value entered is invalid");
	}
}
