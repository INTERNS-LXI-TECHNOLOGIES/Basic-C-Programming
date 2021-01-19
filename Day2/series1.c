#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact ;
    printf(" \n Input Nth Value : ");
    scanf("%d",&n);
    printf(" \n The Series is : 1 ") ;

    for(int i=0;i<n;i++)
    {
        fact = 1;
        for(int j=1;j<=i;j++)
             fact *= j ;
        printf(" + 1/%d",fact) ;
    }
}