#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int lim);
void main()
{
int i,lim;
printf("Enter array limit:\n");
scanf("%d",&lim);
int arr[lim];
printf("Enter values for array:\n");
for(i=1;i<=lim;i++)
{
	scanf("%d",&arr[i]);
}

printf("Sorted array is :\n");
sort(arr,lim);
}

void sort(int arr[],int lim)
{
int temp,i,j;
for(i=1;i<=lim;i++)
{
	for(j=i+1;j<=lim;j++)
	{
		if(arr[i]<arr[j])
		{
		temp =  arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		}
	}
}
for(i=1;i<=lim;i++)
{
	printf("%d",arr[i]);
}


}