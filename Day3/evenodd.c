// 3.	Program to separate Even numbers and Odd numbers in an array.

#include<stdio.h>
int main()
{
    int i,size;
    printf("\n No.of entries to check  : "); 
    scanf("%d", &size);
    
    int array[size];
    for( i = 0; i < size; i++ )
    {
        printf("\nEnter the no. %d : ", i+1);
        scanf("%d",&array[i]);
    }
    
    printf("\nEven numbers in the array : ");
        for (i = 0; i < size; i++) 
        {
            if (array[i] % 2 == 0) 
            {
                printf("%d, ", array[i]);
            }
        }
 
        printf("\nOdd numbers in the array : ");
        for (i = 0; i < size; i++) 
        {
            if (array[i] % 2 != 0) 
            {
                printf("%d, ", array[i]);
            }
        }

    
    printf("\n\n");

return 0;
}