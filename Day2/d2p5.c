#include<stdio.h>
void main()
{
	int i,n,x,count;
	printf("\n Enter the first numbers",n);
	scanf("%d",&n);
	printf("\n Enter the second number",&x);
	scanf("%d",&x);

	while (n < x)
	{
        count = 0;
	}

	for (i = 2; i <= n/2; i++)
	{
		if (n%i==0)
			{
                count = 1;
                break;
			}
	}

	if (count == 0)
		{
			printf("%d ",n);
			n++;
		}
}