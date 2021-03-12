/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
3.Program to find area of circle? (Argument & Return type)
*******************************************************************************/
#include<stdio.h>
#include<math.h>
float circleArea(float x);
int main()
{
    float a,r;
    printf("enter the value for r: \n");
    scanf("%f",&r);
    a=circleArea(r);
    printf("area of a cicle is : %f\n",a);
    return 0;
}
float circleArea(float x)
{
    float area,pi=3.14;
    area=pi*x*x;
    return area;
}