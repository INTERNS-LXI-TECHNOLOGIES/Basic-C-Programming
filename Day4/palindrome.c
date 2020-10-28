// 6.	Program to check whether the given number is palindrome or not? (Argument & return type)

#include <stdio.h>

int pal( int x );

int main()
{
    int org, rev;
    printf("\n Enter an Integer: ");
    scanf("%d", &org);
    
    rev = pal(org);

    if (rev == org)
    {
        printf("\n %d is a Palindrome.", org);
        printf("\n\n");
    }
    else
    {
        printf("\n %d is not a Palindrome.", org);
        printf("\n\n");
    }

}

int pal( int x )
{
    int z,y;
    while (x != 0) 
    {
        y = x % 10;
        z = z * 10 + y;
        x /= 10;
    }
    return z;
}