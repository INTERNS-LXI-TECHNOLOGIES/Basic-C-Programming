// 9.	Program to check whether the given number is amstrong or not ?

#include <stdio.h>
int main() 
{
    int a, n, r, o = 0;
    printf("\n Enter a three-digit integer: ");
    scanf("%d", &a);
    n = a;

    while (n != 0) 
    {
        r = n % 10;
        o += r * r * r;
        n /= 10;
    }
    if (o == a)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.", a);

    return 0;
}