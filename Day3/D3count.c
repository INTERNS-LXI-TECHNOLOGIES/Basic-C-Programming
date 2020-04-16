#include<stdio.h>
void main()
{
	int a[10],n,i,snum,f=0;
	printf("\n Enter Limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter Search Number");
	scanf("%d",&snum);
	for(i=0;i<n;i++)
	{
		if(snum==a[i])
		{
			f++; 
		}

	}

	printf(" Number of times included %d",f);

	}