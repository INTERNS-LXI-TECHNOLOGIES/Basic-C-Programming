// 3.	Program to find area of circle? (Argument & Return type)

#include <stdio.h>

float add(float x, float y);

int main()
{
    float r,area;
    printf("\n TO find the area of a Circle");
    printf("\n Enter the radius : ");
    scanf("%f",&r);

    area = 3.14 * ( r * r );
    printf("\n Area = %.2f sq",area);
    printf("\n\n");

    return 0;
}

float add(float x, float y)
{
    float a;
    a = x + y;
    return a;
}
