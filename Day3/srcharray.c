#include<stdio.h>
#include<conio.h>
int main()
 
{
 
   int array[250], search, n, i;
 
   printf("Please enter how many elements available in an array\n");
 
   scanf("%d",&n);
 
 
 
   printf("\nPlease enter %d numbers in the array", n);
 
 
 
   for (i = 0; i < n; i++)
 
      scanf("%d", &array[i]);
 
 
 
   printf("\nPlease enter the number you want to search");
 
   scanf("%d", &search);
 
 
 
   for (i = 0; i < n; i++)
 
   {
 
      if (array[i] == search)  
 
      {
 
         printf("\n %d is present in the location %d \n", search, i+1);
 
         break;
 
      }
 
   }
 
   if (i == n)
 
      printf("%d is not available in the array.\n", search);
 
   return 0;
 
}