#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i,sum=0;
	printf("enter the number");
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			
			sum=sum+i;
		}
		
	}
	
	if(sum==x)
	{
		printf("the number entered is a perfect number");
	}
	else
	{
		printf("the entered number is not a perfect number");
	}
}
