// 6.	Program to count the search number included in an array.

#include <stdio.h>
int main()
{
   int i,size,count;
   printf("\n Enter the no.of entries  : "); 
   scanf("%d", &size);

   int array[size],search;
   for( i = 0; i < size; i++ )
   {
      printf("\n Enter the no. %d : ", i + 1);
      scanf("%d", &array[i]);
   }

   printf("\n Enter the no. to search : ");
   scanf("%d", &search);

    for ( i = 0; i < size; i++ )
    {
        if ( array[i] == search )
        {
            count ++; 
        }
    }
    printf("\n\n %d occurs %d times.\n\n",search,count);  
    return 0;
}