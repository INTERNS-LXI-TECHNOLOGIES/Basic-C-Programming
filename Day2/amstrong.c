#include<stdio.h>
#include<conio.h>
int main()
{
	int x,r,temp,sum=0;
	printf("enter the number");
	scanf("%d",&x);
	temp=x;
	while(x!=0)
	{		
		r=x%10;
		sum+=(r*r*r)+r;	
		x=x/10;
	
	}
	if(temp==sum);
	{
		printf("the number entered is not an amstrong");
		
	}
	else
	{
		printf("the number entered is  an amstrong");
		printf("the value of sum is %d",sum);
    	printf("the value of temp is %d",temp);
	}
}
