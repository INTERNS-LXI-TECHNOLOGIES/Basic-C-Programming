#include <stdio.h>

int strong ( int x );

int main()
{
    int n,a;
    printf("\n\nEnter the number : ");
    scanf("%d",&n);

    a = strong( n );

    if ( a == 1 )
    {
        printf("\n\t%d is a strong number\n\n",n);
    }
    else
    {
        printf("\n\t%d is not a strong number\n\n",n);
    }
    
}

int strong( int x )
{
    int r, s = 0, i, f,temp,flag;
    temp = x;
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
        if ( s == temp )
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        
        
    }
    return flag;
}