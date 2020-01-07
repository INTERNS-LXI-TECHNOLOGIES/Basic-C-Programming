#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int count=0,i,j,key,size;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements{Repeatation allowed}:\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search key:\n");
	scanf("%d",&key);
	for(i=1;i<=size;i++)
	{
		if(arr[i] == key)
		{
			count++;
			printf("Element %d found at postition %d \n " ,key,i);
		}
	}
	printf("Element found %d times \n",count);
	
}