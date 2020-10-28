// 14.	Program to find sum of array elements up to the limit (Argument & return type)

#include <stdio.h>

int sum( int x, int array[]);

void main() 
{
	int limit,i,total;
    printf("\n\n Enter the limit : ");
    scanf("%d",&limit);

    int array[limit];

    printf("\n\n Enter the elements : ");

    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&array[i]);
    }
    total = sum( limit, array );
    printf("\n\nSum = %d",total);
}

int sum( int x, int array[])
{
    int s = 0,i;
    for(i = 0; i < x; i++)
    {
    	s = s + array[i];
	}
	return s;
    
}