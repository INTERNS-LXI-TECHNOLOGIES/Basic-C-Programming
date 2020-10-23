// 17.   Patterns with *

#include <stdio.h>
int main() 
{
   int i, j, n, s, k=0;
   // i = row
   printf("\n\nEnter the number of rows to print patterns with * : ");
   scanf("%d", &n);

   for (i = 1; i <= n; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("* ");
      }
      printf("\n");
   }
   printf("\n\n");


   for (i = n; i >= 1; --i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("* ");
      }
      printf("\n");
   }
   printf("\n\n");

   for ( i = 1 ; i <= n ; i++) 
   {
      for (j = 1; j <= n - i ; j++) 
      
         printf(" ");

      for (j = 1; j <= i ; j++)

         printf(" *");


      
      printf("\n");
   }   
   printf("\n\n");

   

   return 0;
}