//4.     To generate first n prime numbers where n is entered interactively by the user.

#include<stdio.h>
int main()
{
    int n,i = 3, c, x;
    printf("\n Enter the number of prime numbers required :  ");
    scanf("%d", &n);

    if(n > 1)
    {
        printf("\n First %d prime numbers are :  ", n);
        printf("2, ");
    }
    if(n == 1)
    {
        printf("\n First prime number is :  ", n);
        printf("2 ");
    }

    for(c = 2; c <= n; i++)  
    {
        for(x = 2; x < i; x++)
        {
            if(i%x == 0)
                break;
        }

        if(x == i) 
        {
            printf("%d, ", i);
            c++; 
        }    
    }
    printf("\n");
    return 0;
}