// 7.	Program to check whether the given number is amstrong or not ? (Argument & return type)

#include <stdio.h>

int ams( int x );

int main()
{
    int n, a;
    printf("\n\n Enter the number : ");
    scanf("%d",&n);
    
    a = ams( n );

    if (a == n)
        printf("\n\tArmstrong number.\n\n", a);
    else
        printf("\n\tNot an Armstrong number.\n\n", a);
}

int ams( int x )
{
    int r,b;

    while ( x != 0)
    {
        r = x % 10;
        b += r * r * r;
        x /= 10;
    }
    return b;
}