#include <stdio.h>
 
int main()
 
{
 
   int arr[250], search, n, i;
 
   printf(" enter the no. of elements  in an array\n");
 
   scanf("%d",&n);
 
 
 
   printf("\n enter %d numbers or integers one by one", n);
 
 
 
   for (i = 0; i < n; i++)
 
      scanf("%d", &arr[i]);
 
 
 
   printf("\n enter the number to search");
 
   scanf("%d", &search);
 
 
 
   for (i = 0; i < n; i++)
 
   {
 
      if (arr[i] == search)  
 
      {
 
         printf("\n%d is present at location %d\n", search, i+1);
 
         break;
 
      }
 
   }
 
   if (i == n)
 
      printf("%d is not available in the array.\n", search);
 
 
}
