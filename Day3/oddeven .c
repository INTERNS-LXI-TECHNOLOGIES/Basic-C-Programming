#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int i,a[10],temp[10],lim;
	printf("Enter limit:\t");
	scanf("%d",&lim);
	printf("Enter The numbers:\t");
	
	for(i=1;i<=lim;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=lim;i++)
	{
		if(a[i]%2 != 0)
		{
			printf("odd Numbers:%d \n ",a[i]);
		}
		else
		{
		printf("even numbers: %d\n",a[i]);
		}
	}
	
	
	
	}