#include<stdio.h>
main()
{
	int a[10],r=0,lar,n,i,t;
	printf("Enter how many elements\n");
	scanf("%d",&n);
	printf("Enter  the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched\n");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			r++;
		
		}
		
	}
		
			printf("%d is present in the array %d times",t,r);	
	
	
	
}
