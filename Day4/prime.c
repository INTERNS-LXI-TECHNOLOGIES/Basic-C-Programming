// 10.	Program to check whether the given number is Prime or not ? (Argument & return type)

#include <stdio.h>

int prime( int x );

int main()
{
    int n,a;
    printf("\n Enter the Number : ");
    scanf("%d", &n);

    a = prime( n );

    if (n == 1) 
    {
        printf("\n\t1 is neither prime nor composite.\n\n");
    }
    else 
    {
        if (a == 0)
            printf("\n\t%d is a prime number.\n\n", n);
        else
            printf("\n\t%d is not a prime number.\n\n", n);
    }
    return 0;
}

int prime( int x ) 
{
    int i, flag = 0;
    
    for (i = 2; i <= x / 2; ++i) 
    {
        if (x % i == 0) 
        {
            flag = 1;
            break;
        }
    }
    return flag;
}