#include<stdio.h>
#include<conio.h>
void main()
{
	int row,column;
	for(column=1;column<=5;column++)
	{
		for(row=column;row<=5;row++)
		{
			printf("%d",row);	
		}
		printf("\n");
		
	}
}