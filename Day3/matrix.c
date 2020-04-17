#include <stdio.h>
 
void main()
{
   int m, n, c, d, row1[10][10], row2[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &row1[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
            scanf("%d", &row2[c][d]);
 
   printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = row1[c][d] + row2[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
}