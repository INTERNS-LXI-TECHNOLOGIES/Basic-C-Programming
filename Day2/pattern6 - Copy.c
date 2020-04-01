#include<stdio.h>
#include<conio.h>
void main()
{
	int row,column;
	for(column=5;column>=1;column--)
	{
		for(row=1;row<=column;row++)
		{
			printf("%d",row);
		}
		printf("\n");
	}
}
