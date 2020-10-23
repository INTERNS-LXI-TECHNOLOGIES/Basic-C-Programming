// 17.   Pythagorean triplets

#include <stdio.h>
#include<math.h>
int main() 
{
    int a, b, c;

    printf("\n\n Pythagorean triplets (a,b,c) where a^2 + b^2 = c^2 ");

    printf("\n\nEnter the value of a, b, c : ");
    scanf("%d %d %d", &a,&b,&c);
    
    a = a * a;
    b = b * b;
    c = c * c;

    while ( c>0 )
    {
        if (a+b==c)
        {
            printf("\n The numbers are Pythagoren Triplets");
            break;
        }
        else
        {
            printf("\n The numbers are not Pythagoren Triplets");
            break;
        }
    }
    printf("\n\n");
    return 0;
}