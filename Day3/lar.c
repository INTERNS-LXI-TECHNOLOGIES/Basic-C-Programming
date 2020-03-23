#include<stdio.h>
main()
{
	int a[10],lar,n,i;
	printf("Enter how many elements\n");
	scanf("%d",&n);
	printf("Enter  the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lar=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>lar)
		{
			lar=a[i];
			
		}
	}
	printf("Largest = %d",lar);
}
