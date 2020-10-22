//10.    Program to check whether the given n is perfect or not ?

#include <stdio.h>
int main()
{
    int n, r, a = 0, i;
    printf("\n Enter a Number : ");
    scanf("%d", &n);

    for (i = 1; i <= (n - 1); i++)
    {
        r = n % i;
	    if (r == 0)
        {
            a = a + i;
        }
    }
    if (a == n)
        printf("Entered Number is perfect.");
    else
        printf("Entered Number is not perfect.");
    return 0;
}