#include<stdio.h>
void main()
{
	int row,column;
	for(row=1;row<=5;row++)
	{
		for(column=1;column<=row;column++)
		{
			printf("%d",row);
		}
		printf("\n");
	}
}
