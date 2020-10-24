/* check prime infinite times */

#include <stdio.h>
int main() 
{
    char ch;
    do
    {   
        int n, i, count = 0;
        printf("\n\n Enter a positive integer: ");
        scanf("%d", &n);
        ch=getchar();
        if(ch=='~')
        {
            break;
        }

        else if (n == 1) 
        {
            printf("1 is neither prime nor composite.");
        }
        else if (n!=1)
        {
            for (i = 1; i < n ; i++) 
            {
                if (n % i == 0) 
                {
                    count++;
                }    
            }

            if ( count == 1)
                printf("%d is a prime number.", n);
            else
                printf("%d is not a prime number.", n);
        }        
    }       
    while(1);
}