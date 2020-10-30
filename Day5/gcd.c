// 6.	Program to pass two number and find the GCD of two numbers using function.

#include<stdio.h>

void gcd(int,int);

int main()
{
    int x,y;
    printf("\n\nEnter two numbers\n");
    scanf("%d %d", &x, &y);
    gcd( x, y );
}
void gcd(int a, int b){
    int n, hcf;
    while (b != 0) 
    {
        n = b;
        b = a % b;
        a = n;
    }
    hcf = a;
    printf("\n GCD : %d \n\n", hcf);
}
