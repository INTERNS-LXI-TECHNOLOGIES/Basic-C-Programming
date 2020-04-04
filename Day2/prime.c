#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value for n");
	scanf("%d",&n);
	printf("2\n");
	for(i=2;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
}
