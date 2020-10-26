// 12.	Program to find Transpose of matrix.

#include <stdio.h>
int main() 
{
    int row, column, a[100][100], t[100][100], i, j;
    printf("\n\n To find the Transpose of a Matrix ");
    printf("\n Enter the number of rows :\t");
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

    printf("\n\n Matrix Created \n\n");
    
    for (i = 0; i < row; i++ )
    {
        for (j = 0; j < column; j++ ) 
        {
            
            printf("%d  ", a[i][j]);
            if ( j == column - 1 )
                printf("\n");
        }
    }

    printf("\n Transpose of the Matrix \n\n");
    for ( i = 0; i < row; i++ )
    {
        for ( j = 0; j < column; j++ )
        {
            t[j][i] = a[i][j]; 
        }     
    }
    for (i = 0; i < column; i++ )
    {
        for (j = 0; j < row; j++ ) 
        {
            printf("%d  ", t[i][j]);
            if ( j == row - 1 )
                printf("\n");
        }
    }
    printf("\n\n");
    
     
 	return 0;
}