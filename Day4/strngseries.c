#include <stdio.h>

void strong ( int x );

int main()
{
    int i = 100;
    strong (i);

}

void strong( int x )
{
    int r, s , i, j, f;
    
    for ( i = 100; i < 1000; i++)
    {
        x = i;
        s = 0;

        while ( x > 0 )
        {
            r = x % 10;
            f = 1;
            for ( j = 1; j <= r; j++)
            {
                f = f * j;
            }
            s = s + f;
            x = x / 10;
        }
        if ( s == i )
        {
            printf("\n\n Strong numbers between 100 & 1000 are : %d, ",i);
        }
    }
    printf("\n\n");
}