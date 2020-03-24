#include<stdio.h>
#include<conio.h>
int main()
{
	int size,i,largest;
	printf("enter the size of an array");
	scanf("%d",&size);
	int array[size];
	printf("enter the elements of an array");
		for(i=0;i<=size;i++)
		{
			scanf("%d",&array[i]);
		}
		largest=array[0];
		for(i=1;i<size;i++)
		{
			if(largest<array[i])
			{
			
			largest=array[i];
			}
			printf("the largest number is %d",largest);
		}
		
}


