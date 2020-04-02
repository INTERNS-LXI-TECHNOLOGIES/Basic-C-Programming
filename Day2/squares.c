#include<stdio.h>
void main()
{
    int n,i,sum;
    i=0,sum=0;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        ++i;
    }
    printf(" the sum of squares of first n natural numbers=: %d ",sum);
}
