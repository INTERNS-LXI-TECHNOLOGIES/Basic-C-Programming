// 1.	Program to find sum of digits of given number? ( No argument and no return type)

#include <stdio.h>

void sum();
void main()
{
    sum();
}

void sum()
{
    int a,b,sum;
    printf("\n Enter a number : ");
    scanf("%d",&a);

    while (a>0)
    {
        b = a % 10; 
        sum = sum + b;       
        a = a / 10;
        
    }
    printf("\n\t%d",sum);
    printf("\n\n");
}