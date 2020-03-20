#include<stdio.h>
main()
{
	int i,j,n,prime,a,b;
	printf("Enter the intervel a & b : ");
	scanf("%d%d",&a,&b);
	i=a;
	while(i<=b)
	{
		for(j=2;j<=(i/2);j++)
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
			printf("\n %d",i);
		}
		i++;
	}}
