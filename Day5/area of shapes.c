/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to find Area of square ,Rectangle ,Triangle and Circle using Structure & Union
*******************************************************************************/
#include <stdio.h>
struct triangle
{
    int base;
    int height;
    float t;
    float aot;
}a1;
struct circle
{
    float pi;
    int r;
    float aoc;
}a2;
struct square
{
    int a;
    int aos;
}a3;
struct rectangle
{
    int w;
    int h;
    float aor;
}a4;

int main()
{
    int ch;
    printf("1.triangle \n 2.circle \n 3.square \n 4.rectangle \n");
    printf("enter ur choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    a1.base = 2;
    a1.height = 3;
    a1.t = 0.5;
    a1.aot= a1.base*a1.height*a1.t;
    printf("area of triangle is : %.2f \n ",a1.aot);
    printf("\n");
    break;
    case 2:
    a2.pi=3.14;
    a2.r=2;
    a2.aoc=a2.pi*a2.r*a2.r;
    printf("area of cicle : %f \n",a2.aoc);
    printf("\n");
    break;
    case 3:
    a3.a=2;
    a3.aos=a3.a*a3.a;
    printf("area of square : %d",a3.aos);
    printf("\n");
    break;
    case 4:
    a4.w=2;
    a4.h=3;
    a4.aor=a4.w*a4.h;
    printf("area of rectangle :%f",a4.aor);
    printf("\n");
    break;
    default:
    printf("invalid choice");
    }
    return 0;
}
