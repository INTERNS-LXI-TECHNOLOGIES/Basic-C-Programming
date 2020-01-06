#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int r,i,j,k;
	printf("Enter no.of rows:\t");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		
		for(j=i;j<r;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}





#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int size;
	printf("Enter size:\t");
	scanf("%d",&size);
	int a[size];
	int i,j,temp,min;
	printf("Enter array Elements:\t");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<=size;i++)
	{
		min = i;
		for(j=i+1;j<=size;j++)
		{
			if(a[i]<a[j])
			{
				min = j;
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		printf("%d",temp);
	}
	
}
