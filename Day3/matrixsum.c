#include <stdio.h>
int main() {
int r, c, a[2][2], b[2][2], sum[2][2], i, j;
printf("\nEnter elements of 1st matrix:\n");
for (i = 0; i < 2; ++i)
for (j = 0; j < 2; ++j) {
printf("Enter element a%d%d: \n", i + 1, j + 1);
scanf("%d", &a[i][j]);
}
printf("Enter elements of 2nd matrix:\n");
for (i = 0; i < 2; ++i)
for (j = 0; j < 2; ++j) {
printf("Enter element a%d%d: ", i + 1, j + 1);
scanf("%d", &b[i][j]);
}
for (i = 0; i < 2; ++i)
for (j = 0; j < 2; ++j) {
sum[i][j] = a[i][j] + b[i][j];
}
printf("\nSum of two matrices: \n");
for (i = 0; i < 2; ++i)
for (j = 0; j < 2; ++j) {
printf("%d   ", sum[i][j]);
 }
}
            
