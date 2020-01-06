#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int i,sum=0,a[10],lim;
	printf("Enter limit:\t");
	scanf("%d",&lim);
	printf("Enter The numbers:\t");
	for(i=1;i<=lim;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=lim;i++)
	{
		sum = sum + a[i];
	}
	
	printf("sum of %d numbers is %d",lim,sum);
	
}