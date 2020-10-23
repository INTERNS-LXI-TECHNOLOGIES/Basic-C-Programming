// 17.   Patterns with numbers

#include <stdio.h>
int main() {
   int i, j, a, k=1;
   // i = row
   printf("\n\nEnter the number of rows to print : ");
   scanf("%d", &a);

   for (i = 1; i <= a; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ",j);
      }
      printf("\n");
   }

   printf("\n\n");

   for (i = a; i >= 1; --i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ",j);
      }
      printf("\n");
   }

   printf("\n\n");

   for ( i = 1; i <= a; i++)
   {
      for ( j = 1; j <= i; j++ )
      {
         printf("%d ",i);
      }
      printf("\n");
   }

   printf("\n\n");

   for ( i = 1; i <= a; i++)
   {
      for ( j = i; j <= a; j++ )
      {
         printf("%d ",j);
      }
      printf("\n");
   }

   printf("\n\n");
   
   for ( i = 1; i <= a; i++)
   {
      for ( j = 1; j <= i; j++,k++ )
      {
         printf("%d ",k);
      }
      printf("\n");
   }

   printf("\n\n");
   

   return 0;
}
