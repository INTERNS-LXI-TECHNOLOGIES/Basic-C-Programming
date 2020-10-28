// 2.	Program to print multiplication table ?( No argument and no return type)

#include <stdio.h>

void mul();

int main()
{
    mul();
}

void mul()
{
    int a, m, i;
    printf("\n\nEnter the multiplication table to be printed : ");
    scanf("%d",&a);

    for( i = 1; i <= 10; i++ )
    {
        m = a * i;
        printf("\n %d * %d = %d",i,a,m);
    }
    printf("\n\n");
}