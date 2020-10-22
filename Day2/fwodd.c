//2.	To print all odd numbers between 200 and 6 using both for loop and while loop.

#include<stdio.h>
int main()
{
    int i;
    printf("\n Odd numbers between 6 & 200 using for loop : \n");
    
    for ( i = 6; i < 200; i++)
    {
        if (i%2==1)
        {
            printf("%d, ", i);
            // printf("%d\n", i);
        }
    }

    int a=7;
    printf("\n\n Odd numbers between 6 & 200 using while loop : \n");

    while (a <= 200) {  
        printf("%d, ", a);
        // printf("%d\n", a);
        a = a + 2;  
    }  
    printf("\n\n");
    return 0;  
} 