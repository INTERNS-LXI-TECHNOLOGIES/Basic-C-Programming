#include<stdio.h>
void main()
{
	int a [10],n,i,snum,f=0;
	printf("\n Enter the limit");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n Enter search number");
	scanf("%d",&snum);
	
	for(i=0;i<n;i++)
	{
		if(snum==a[i])
		{
			f=1;
		}
	}
		if(f==1)
		printf("\n Search number included");
		else
		printf("\n Search number is not included");
}