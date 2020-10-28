// 4.	Program to search a number from an array..

#include <stdio.h>
int main()
{
   int i,size,x=0;
   printf("\n No.of entries to check  : "); 
   scanf("%d", &size);

   int array[size],search;
   for( i = 0; i < size; i++ )
   {
      printf("\nEnter the no. %d : ", i + 1);
      scanf("%d", &array[i]);
   }

   printf("\nPlease enter the no. to search : ");
   scanf("%d", &search);

   for (i = 0; i < size; i++)
   {
      if (array[i] == search)  
      {
         x = 1;
         break;
      }
   }
   if ( x == 1 )
   {
      printf("\n\n No. %d is available.\n\n", search, i);
   }
   else
   {
      printf("\n\n No. %d is not available.\n\n", search);
   }
   return 0;
}