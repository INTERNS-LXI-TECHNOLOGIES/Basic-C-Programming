//4.     To generate first n prime numbers where n is entered interactively by the user.

#include<stdio.h>
int main()
{
    int a,i,c,n;
    printf("\n Enter the Range : ");
    scanf("%d",&a);

    for(n = 1 ; n <= a ; n++)
    {
        c = 0;
        for(i = 2 ; i <= n / 2 ; i++)
        {
            if(n % i == 0)
            {
                c++;
                break;
            }
        }
        if( c == 0 && n!= 1)
        printf("%d, ",n);
    }
return 0;
}