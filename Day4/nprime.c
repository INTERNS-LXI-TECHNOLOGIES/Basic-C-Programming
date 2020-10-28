// 12.	To generate prime Series between 10 and 100. (Argument & not return type)


#include <stdio.h>

void prime ( int x );

int main()
{
    int i = 10;
    printf("\n\n Prime numbers between 10 & 100 : ");
    prime(i);
}

void prime( int x )
{
    int i,j;

    for(i=10; i<100; i++)
    {
        for(int j=2; j<=100; j++)
        {
            if(i==j)
            {                
                printf("%d, ", i);
            }
            else if( i %  j== 0 )
            {
                break;
            }
        }
    }
    printf("\n\n");
}
