#include<stdio.h>
void main()
{
int n, i, largest,a[n];
printf("\n Enter the size of the array: ");
scanf("%d", &n);
printf("\n Enter %d elements of  the array: \n", n);
for (i = 0; i < n; i++)
{   
scanf("%d", &a[i]);
}
largest = a[0];
for (i = 1; i < n; i++) 
 {
if (largest < a[i])
largest = a[i];
}
printf("\n largest element present in the given array is : %d \n", largest);
}
