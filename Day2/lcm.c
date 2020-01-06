#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
		
	int n1,n2,min;
	printf("Enter 1st Number:\t");
	scanf("%d",&n1);
	printf("Enter 2nd Number:\t");
	scanf("%d",&n2);
	min = (n1<n2)?n1:n2;
	printf("%d\n",min);
	while(1)
	{
		if(( min % n1 == 0) && (min %n2  == 0 ))
		{
		printf("%d\n",min);	
		 printf("LCM Of \t %d \t and \t %d \t is \t %d \t ",n1,n2,min);	
		 break;
		}
		min++;
	}
}
