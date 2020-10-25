// 7.	Program to sort an array.

#include <stdio.h>
int main()
{
        
    int i, j, size, a;

    int b,c,d,e;
            
    printf("\n Enter the no.of entries : ");
    scanf("%d", &size);

    int array[size];
    for (i = 0; i < size; ++i)
    {
        printf("\n Enter the no.%d : ", i + 1);
        scanf("%d", &array[i]);
    }
    int choice;
    printf("\n Enter the choice \n\t\t 1. Ascending Order \n\t\t 2. Descending Order\n\n");
    scanf("%d", &choice);
    if ( choice == 1 )
    {
                       
            for (i = 0; i < size; ++i) 
            {
                for (j = i + 1; j < size; ++j)
                {
                    if (array[i] > array[j]) 
                    {
                        a =  array[i];
                        array[i] = array[j];
                        array[j] = a;
                    }
                }
            }

            printf("Numbers in Ascending Order \n");
            for (i = 0; i < size; ++i)
            printf("%d\n", array[i]);

    }
    else if ( choice == 2 )
    { 

            for (i = 0; i < size; ++i) 
            {
                for (j = i + 1; j < size; ++j)
                {
                    if (array[i] < array[j]) 
                    {
                        a =  array[i];
                        array[i] = array[j];
                        array[j] = a;
                    }
                }
            }

            printf("Numbers in Descending Order \n");
            for (i = 0; i < size; ++i)
            printf("%d\n", array[i]);

    }
    else
    {
        printf("\n\n Invalid Choice...!\n\n");
    }
    

    
    return 0;
}