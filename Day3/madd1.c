// 11.	Program to find sum of * of matrix.

#include <stdio.h>
int main() 
{
    int row, column, a[100][100], sum=0, i, j,c;
    printf("\n\n Enter the number of rows :\t");
    scanf("%d", &row);
    printf(" Enter the number of columns :  ");
    scanf("%d", &column);

    printf("\n\nEnter elements of matrix \n\n");
    for ( i = 0; i < row; i++ )
    {
        for ( j = 0; j < column; j++ ) 
        {
            printf(" Enter element a %d,%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n Enter the Choice");
    printf("\n\t\t  1.	Top row elements of a matrix \n\t\t  2.	Diagonal Elements of a matrix \n\t\t  3.	Bottom row elements of a matrix\n\n");
    scanf("%d",&c);

    if ( c == 1 )
    {
        for ( j = 0; j < column; j++ )
        {
            i=0;
            sum = sum + a[i][j];
        }
        printf("\n The Sum of Top row Elements of Matrix =  %d", sum );
    }
    if ( c == 2 )
    {
        for ( i = 0; i < row; i++ )
        {
            j = i;
            sum = sum + a[i][j];
        }
        printf("\n The Sum of Diagonal Elements of Matrix =  %d", sum );
    }
    if ( c == 3)
    {
       for ( j = 0; j < column; j++ )
        {
            i = row - 1;

            sum = sum + a[i][j];
        
        }
        printf("\n The Sum of Bottom row Elements of Matrix =  %d", sum );
    }
 	return 0;
}