/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
union triangle
{
    int b;
    int he;
    float t;
    float aot;
};
union circle
{
    float PI;
    int r;
    float aoc;
};
union square
{
    int a;
    int aos;
};
union rectangle
{
    int w;
    int h;
    float aor;
};
int main()
{
    union triangle a1;
    union circle a2;
    union square a3;
    union rectangle a4; 
    
    printf("triangle\n");
    a1.b=20;
    a1.he=12;
    a1.t= 0.5;
    printf("base: %d \n height: %d \n t: %f \n",a1.b,a1.he,a1.t);
    a1.aot=a1.b*a1.he*a1.t;
    printf("area of triangle is : %.2f  ", a1.aot);
    printf("\n");
     
    printf("circle\n");
    a2.PI=3.14;
    a2.r=3;
    printf("radius: %d \n",a2.r);
    a2.aoc=a2.PI*a2.r*a2.r;
    printf(" area of cicle : %f",a2.aoc);
     printf("\n");
    
    printf("square\n");
    a3.a=2;
    printf("a: %d \n",a3.a);
    a3.aos=a3.a*a3.a;
    printf("area of square : %d",a3.aos);
    printf("\n");
    
    
    printf("rectangle\n");
    a4.w=5;
    a4.h=3;
    printf("width: %d \n height : %d\n",a4.w,a4.h);
    a4.aor=a4.w*a4.h;
    printf("area of rectangle :%f\n",a4.aor);
    return 0;
}

