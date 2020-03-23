#include<stdio.h>
main()
{
	int a[10],e[10],o[10],i,n,j=0,k=0;
	printf("Enter how many elements\n");
	scanf("%d",&n);
	printf("Enter  the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{	
			e[j++]=a[i];
			
		}
		else
		{
			o[k++]=a[i];
		}
	}
	printf("\nOdd Numbers = ");
	for(i=0;i<k;i++)
	{
		printf(" %d ",o[i]);
	}
	printf("\nEven Numbers = ");
	for(i=0;i<j;i++)
	{
		printf(" %d ",e[i]);
	}
	
	
}
