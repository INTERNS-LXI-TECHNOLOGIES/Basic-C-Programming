#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,number[30],a,n;
	printf("enter the number");
	scanf("%d",&n);
	
	printf("enter the numbers");
	for(i=0;i<=n;i++)
	{
	scanf("%d",&number[i]);
	}
	
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
			
		}
	}
		printf("the sorted array is");
		for(i=0;i<n;i++);
		{
			printf("%d\n",number[i]);
		}
	
}