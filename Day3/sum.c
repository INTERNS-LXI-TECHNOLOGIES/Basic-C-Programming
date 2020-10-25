// 2.	Program to find sum of 10 numbers.

#include<stdio.h>
int main()
{
    int array[10];
    int sum = 0,i;

    for( i = 0; i < 10; i++ )
    {
        printf("\nEnter the no. %d : ", i+1);
        scanf("%d",&array[i]);
    }
    
    for ( i = 0; i < 10; i++ ) 
    {
        sum += array[i];
    }

    printf("\nSum  = %d", sum);
    printf("\n\n");

return 0;
}