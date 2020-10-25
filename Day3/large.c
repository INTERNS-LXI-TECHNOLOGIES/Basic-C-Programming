// 1.	Program to find largest of  n numbers up to the limit.

#include<stdio.h>
int main()
{
    int i,size;
    printf("\n No.of entries to check  : "); 
    scanf("%d", &size);
    
    int large[size];
    for( i = 0; i < size; i++ )
    {
        printf("\nEnter the no. %d : ", i+1);
        scanf("%d",&large[i]);
    }
    
    for ( i = 1; i < size; i++ ) {
        if (large[0] < large[i])
            large[0] = large[i];
    }

    printf("\nLargest No. = %d", large[0]);
    printf("\n\n");

return 0;
}