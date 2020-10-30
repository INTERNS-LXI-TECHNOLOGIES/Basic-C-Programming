// 10.	Program to sort the element in descending in a 1D array using function.

#include <stdio.h>

struct array { int l; int a[10] ;};

void sort ( struct array );

void main()
{
    int i;
    struct array arr;

    printf("\n\n Enter the limit : ");
    scanf("%d", &arr.l);

    printf("\n Enter the elements\n");

    for ( i = 0; i < arr.l; i++ )
    {
        scanf("%d", &arr.a[i]);
    }
    sort ( arr );
}

void sort ( struct array arr )
{
    int x, i, j;
    printf("\n\n Sorted array\n");

    for ( i = 0; i < arr.l; i++ )
    {
        for ( j = i + 1; j < arr.l; j++ )
        {
            if ( arr.a[i] < arr.a[j] )
            {
                x = arr.a[i];
                arr.a[i] = arr.a[j];
                arr.a[j] = x;
            }
        }
    }
    for ( i = 0; i < arr.l; i++ )
    {
        printf("\n %d", arr.a[i]);
    }
}