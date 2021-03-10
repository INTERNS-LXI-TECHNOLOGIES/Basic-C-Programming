/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
float squ(float x);
int main()
{
    int m,n;
    printf("enter a numbers: ");
    scanf("%f",&m);
    n=squ(m);
    printf("square = %f",n);
    return 0;
}
float squ(float x)
{
    int p;
    p=x*x;
    return p;
}


