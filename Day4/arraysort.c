// 13.	Program to sort an array (Argument & no return type)

#include <stdio.h>

void ascending(int array[10]);
void descending(int array[10]);

int main()
{
    int array[10] = {56,45,78,95,15,24,32,64,88,9};
    ascending(array);
    descending(array);
}

void ascending( int array[10] )
{
    int i,j,temp;
    printf("\n\n In Ascending order : ");
    for(i=0; i<10; i++)
    {
        for( j=0; j<10; j++)
        {
            if (array[i] < array[j] )
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0; i<10; i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n");
}

void descending( int array[10] )
{
    int i,j,temp;
    printf("\n In Descending order : ");
    for(i=0; i<10; i++)
    {
        for ( j = i + 1; j < 10; j++)
        {
            if ( array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
           }   
        }
    }
    for(int i=0; i<10; i++)
    {
       printf("%d, ",array[i]);
    }
    printf("\n\n\n");
}


