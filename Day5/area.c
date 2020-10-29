/*1.	Program to find Area of square ,Rectangle ,Triangle and Circle 
	using Structure & Union*/

#include<stdio.h>
#include<math.h>

union area
{
    struct square { float side, s_area ;};
    struct rectangle { float length, breadth, r_area;};
    struct triangle { float base, height, t_area ;};
    struct circle { float pi, radius, c_area ;};
};

float Square ( union area square )
{
    printf("\n Area of Square : ");
    square.s_area = pow( square.side, 2);
    printf("%f\n\n", square.s_area);
    return square.s_area;
}

float Rectangle ( union area rectangle )
{
    printf("\n Area of Rectangle : ");
    rectangle.r_area = rectangle.length * rectangle.breadth;
    printf("%f\n\n", rectangle.r_area);
    return rectangle.r_area;
}

float Triangle ( union area triangle )
{
    printf("\n Area of Triangle : ");
    triangle.t_area = (triangle.base * triangle.height) / 2;
    printf("%f\n\n", triangle.t_area);
    return triangle.t_area;
}

float Circle ( union area circle )
{
    printf("\n Area of Circle : ");
    circle.c_area = circle.pi * pow(circle.radius, 2);
    printf("%f\n\n", circle.c_area);
    return circle.c_area;
}

int main()
{
    int choice;
    float side, area_s=0;
    float ln, br, area_r=0;
    float bs, hp, area_t=0;
    float r, area_c=0;

    printf("\n\n Choose an Option. \n");
    printf("\n\t 1. Area of a Square. ");
    printf("\n\t 2. Area of a Rectangle. ");
    printf("\n\t 3. Area of a Triangle. ");
    printf("\n\t 4. Area of a Circle. ");
    printf("\n\n\t");

    scanf("%d", &choice);

    if ( choice == 1 )
    {
        printf("\n Enter the side  : ");
        scanf("%f", &side);
        union area square = { side, area_s };
        Square(square);
    }

    else if ( choice == 2 )
    {
        printf("\n Enter length and breadth : ");
        scanf("%f%f", &ln, &br);
        union area rectangle = { ln, br };
        Rectangle(rectangle);
    }

    else if ( choice == 3 )
    {
        printf("\n Enter base and height : ");
        scanf("%f%f", &bs, &hp);
        union area triangle = { bs, hp };
        Triangle(triangle);
    }

    else if ( choice == 4 )
    {
        printf("\n Enter the radius : ");
        scanf("%f", &r);
        union area circle = { 3.14, r };
        Circle(circle);
    }

    else 
    {
        printf("\n\n\t Invalid Choice...! \n\n");
    }
    return 0;
}
