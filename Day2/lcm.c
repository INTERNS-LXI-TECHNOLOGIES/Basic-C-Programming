// 7.   To find the L.C.M of two numbers.


#include <stdio.h>
int main() 
{
    int a, b, max;
    printf("\n Enter two positive integers : ");
    scanf("%d %d", &a, &b);

// maximum number between a and b is stored in min
    max = (a > b) ? a : b;

    while (1) 
    {
        if (max % a == 0 && max % b == 0) 
        {
            printf("The LCM of %d and %d is %d.", a, b, max);
            break;
        }
        ++max;
    }
    return 0;
}