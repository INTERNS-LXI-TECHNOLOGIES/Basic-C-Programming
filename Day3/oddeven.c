#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i;
	printf("enter the size of an array ");
	scanf("%d",&size);
	int a[size];
	printf("enter the elements to the array");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=size;i++)
	{
		if(a[i]%2==0)
		{
			printf("the even numbers are %d\n",a[i]);
			
			}
	}
			
		for(i=1;i<=size;i++)
		{
			if(a[i]%2!=0)
			{
				printf("the odd numbers are %d\n",a[i]);
			}
		}
			
}

