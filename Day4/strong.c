// 9.	Program to check whether the given number is Strong or not ? (Argument & return type)

#include <stdio.h>

int strong ( int x );

int main()
{
    int n,a;
    printf("\n\nEnter the number : ");
    scanf("%d",&n);

    a = strong( n );

    if(a == n)
    printf("\n\t%d is a strong number",n);
    else
    printf("\n\t%d is not a strong number",n);
}

int strong( int x )
{
    int r, s = 0, i, f;
    while ( x > 0 )
    {
        r = x % 10;
        f = 1;
        for ( i = 1; i <= r; i++)
        {
            f = f * i;
        }
        s = s + f;
        x = x / 10;
    }
    return s;   
}