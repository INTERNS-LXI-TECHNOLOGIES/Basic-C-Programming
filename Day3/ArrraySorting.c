#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int count=0,i,j,key,size,temp;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter array elements:\n");
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=size;i++)
	{
		for(j=i+1;j<=size-1;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<=size-1;i++)
	{
		printf("%d",a[i]);
	}
	
}