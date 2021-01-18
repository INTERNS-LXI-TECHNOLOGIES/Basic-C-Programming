#include<stdio.h>
#include<conio.h>
int main()
{
    int j,k,b=4 ;
    for(int i=1;i<=5;i++)
    {
        for(j=b ; j>0;j--)
            printf(" ") ;
        b--;

        for(j=i;j>0;j--)
            printf(" * ") ;
    printf("\n") ;
    }
}