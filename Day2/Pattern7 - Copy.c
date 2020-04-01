#include<stdio.h>
#include<conio.h>
int main()
{
	int n,row,column,i=1;
	printf("enter the limit");
	scanf("%d",n);
	for(row=1;row<=n;row++)
	{
		for(column=1;column<=row;column++)
		{
				printf("%d",i);	
				i=i+1;
		
		}
			printf("\n");
		
	}
}
