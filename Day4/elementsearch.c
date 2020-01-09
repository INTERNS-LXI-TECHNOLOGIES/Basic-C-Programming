#include <stdio.h>
#include <stdlib.h>
void search(int arr[],int lim,int key);
void main()
{
int i,lim,key;
printf("Enter array limit:\n");
scanf("%d",&lim);
int arr[lim];
printf("Enter values for array:\n");
for(i=1;i<=lim;i++)
{
	scanf("%d",&arr[i]);
}
printf("Enter search key:\n");
scanf("%d",&key);
search(arr,lim,key);
}



void search(int arr[],int lim,int key)
{
int temp,i,j;
for(i=1;i<=lim;i++)
{
		if(arr[i] == key)
		{
			printf("Element %d\t found at position %d\n",key,i);
			break;
		}
		if(i==lim)
{
	printf("Not found");
}
		
}

		
}


