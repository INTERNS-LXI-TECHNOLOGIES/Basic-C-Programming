#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int n;
	printf("Enter a number between 0 and 6:");
	scanf("%d",&n);
	switch(n)
	{
		case 0:printf("sunday");break;
		case 1:printf("monday");break;
		case 2:printf("tuesday");break;
		case 3:printf("wednsday");break;
		case 4:printf("thursday");break;
		case 5:printf("friday");break;
		case 6:printf("saturday");break;
		default:printf("enter valid number");
	}
}