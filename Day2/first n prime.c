#include<stdio.h>
main()
{
	int i,j,n,prime,count;
	printf("Enter the value of N : ");
	scanf("%d",&n);
	printf("First %d prime numbers are : \n2\n",n);
	for(count=2;count<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
				
			}
			else
			{
				prime=1;
			}
		}
		if(prime==1)
		{
			printf("%d\n",i);
			count++;
		}
	}
}
