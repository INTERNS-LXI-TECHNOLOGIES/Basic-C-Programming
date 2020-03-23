#include<stdio.h>
main()
{
	int a[10],r,lar,n,i,t;
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
			r=i;
			break;
		}
		else
		{
			r=-1;
		}
	}
		if(r!=-1)
		{
			printf("%d is present at position %d",t,i+1);	
		}
		else
		{
			printf("%d is not present",t);
		}	
		
	
	
}
