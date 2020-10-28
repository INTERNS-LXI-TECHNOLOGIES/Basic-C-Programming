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
    printf("\n Enter 2 digit number : ");
    scanf("%d",&a);

    b = a % 10;        
    a = a / 10;
    sum = a + b;
    
    printf("\n\t%d",sum);
    printf("\n\n");
}