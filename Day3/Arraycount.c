#include<stdio.h>
int main()
{
	int arr[100],freq[100];
	int size,i,j,count;
	
	printf("enter the size of an array");
	scanf("%d",&size);
	
	printf("enter the elements in an array");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;		
		
	}
	
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=j+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				
				freq[j]=0;
				
			}
				
		
	}
	 		count++;
		
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
		
	}
		
	
	printf("frequency of elements in the array\n");
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",arr[i],freq[i]);
		}
	}
	

}
