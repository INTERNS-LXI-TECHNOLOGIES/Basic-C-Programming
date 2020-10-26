// 11.	Program to find sum of two matrices.

#include <stdio.h>
int main() {
    int row, column, a[100][100], b[100][100], sum[100][100], i, j;
    printf("\n\n Enter the number of rows :\t");
    scanf("%d", &row);
    printf(" Enter the number of columns :  ");
    scanf("%d", &column);

    printf("\n\nEnter elements of matrix A \n");
    for ( i = 0; i < row; i++ )
    {
        for ( j = 0; j < column; j++ ) 
        {
            printf(" Enter element a %d,%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter elements of matrix B \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++) 
        {
            printf(" Enter element b %d,%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }  

    for (i = 0; i < row; i++ )
    {
        for (j = 0; j < column; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of 1st row of Matrices A & B \n");
     
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++) 
        {
            printf("%d   ", sum[i][j]);
            if (j == column - 1) 
            {
                printf("\n\n");
            }
        }
    }


    return 0;
}