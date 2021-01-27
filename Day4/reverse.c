#include <stdio.h>
int reverse ( int x );
int main()
{
    int n,a;
    printf("\n\nEnter the number : ");
    scanf("%d",&n);
    a = reverse( n );
    printf("\nReverse of entered number : %d", a);
    printf("\n\n");
}
int reverse(int x)
{
    int rev=0,r;
    while (x>0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    return rev;
}