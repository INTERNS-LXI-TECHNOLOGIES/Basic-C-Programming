#include<stdio.h>
void main()
{

int n,i,count=0;
	printf("enter the value for n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	printf("Yes given Number is prime");
	else
	printf("Not a prime");

}

