#include <stdio.h>
int main()
{
	int i,a,k=1;
	float sum=0;
	printf("enter the number\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=k*i;
		sum=sum+((float )1/k);
		
	printf("1/%d +",k);
	
	//printf("%d",1/a);
	}
	
	}

