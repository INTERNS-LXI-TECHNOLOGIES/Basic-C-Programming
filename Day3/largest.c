#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
int i,a[20],lim,largest;

printf("Enter the limit:\t");
scanf("%d",&lim);
printf("Enter the numbers:\t");
for(i=0;i<lim;i++)
{
scanf("%d",&a[i]);
}
largest = a[0];

for(i=1;i<lim;i++)
{
	if(largest<a[i])
	{
		largest = a[i];
	}
}

printf("Larget number is %d",largest);
	
}	

	
