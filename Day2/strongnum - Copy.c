#include <stdio.h>

int main()
{
    int i, j, r, lastDigit, end;
    long long fact, sum;
   

    printf("All Strong numbers between 1 to 1000 are");
    for(i=100; i<=1000; i++)
    {
        r = i;

        sum = 0;
 
        while(r > 0)
        {
            fact = 1;
            lastDigit = r % 10;
            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            r /= 10;
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

}
