#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fact(int);
void main()
{
	int i,j;
	for(i=5;i>=0;i--)
	{
		for(j=5;j>=i;j--)
		{
		printf("*");
		}
	printf("\n");
	}
}
