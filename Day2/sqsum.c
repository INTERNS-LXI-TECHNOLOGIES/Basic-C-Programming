//1.     To find the sum of squares of first n natural numbers. User gives n.

#include<stdio.h>
int main()
{
    int n,x;
    printf("\n Enter the number : ");
    scanf("%d",&n);
    
    if (n < 1) 
    {
        printf("\n %d is not a natural number.",n);
    }
    else
    {
        x = (n*(n+1)*(2 * n + 1)) / 6;
        printf("\n The sum of squares of first %d natural numbers is %d",n,x);
    }
    return 0;
}