// 5.	Program to find the position of search number in an array .

#include <stdio.h>
int main()
{
   int i,size;
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
            printf("\n\n No. %d is present at location %d\n\n", search, i + 1);
            break;
         }
      }
      if (i == size)
      {
         printf("\n\n No. %d is not available in the array\n\n", search);
      }
   return 0;
}