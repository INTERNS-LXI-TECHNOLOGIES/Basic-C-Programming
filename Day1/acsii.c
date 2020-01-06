#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int i,j,k,a[10],lim,b[10],c[10];
	printf("Enter limit:\t");
	scanf("%d",&lim);
	printf("Enter The numbers:\n");
	
	for(i=0;i<lim;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=lim;i++)
	{
		if(a[i]%2 == 0)
		{	
			
			b[j] = a[i];
			j++;
		}
		else
		{
			c[k] = a[i];
			k++;
		}
		
	}
	
	printf("Even Numbers:\n");
	for(i=0;i<j;i++)
	{
		printf("%d \n",b[i]);
	}
	printf("Odd Numbers:\n");
	for(i=0;i<k;i++)
	{
		printf("%d \n",c[i]);
	}
}

