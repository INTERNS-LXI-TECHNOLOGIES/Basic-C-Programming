// 8.	Program to check whether the given number is perfect or not ? (Argument & return type)

#include <stdio.h>

int perfect( int x );

int main()
{
    int n, a;
    printf("\n\n Enter the number : ");
    scanf("%d",&n);

    a = perfect( n );

    if (a == n)
        printf("\n\t%d is perfect.\n\n",n);
    else
        printf("\n\t%d is not perfect.\n\n",n); 

}

int perfect( int x )
{
    int i,r,b = 0;
    for (i = 1; i < x; i++)
    {
        r = x % i;
	    if (r == 0)
        {
            b = b + i;
        }
    }
    return b;
}