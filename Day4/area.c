#include<stdio.h>
#include<conio.h>
struct rectangle
{
	float length;
	float breadth;
	float area;
}r;

struct circle
{
	float radius;
	float area;
}c;

struct square
{
	float side;
	float area
}s;

struct triangle
{
	float lengthtraiangle;
	float height;
	float area;
}t;

void main()
{
	int ch;
	printf("enter the choice 1)Rectangle 2)Circle 3)Square 4)Triangle");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Enter the length and breadth of rectangle");
				scanf("%f%f",&r.length,&r.breadth);
				r.area=r.length*r.breadth;
				printf("The area of rectangle is %f",r.area);
				break;
				
		case 2:printf("Enter the radius of the circle");
				scanf("%f%f",&c.radius);
				c.area=3.14*c.radius*c.radius;
				printf("The area of the circle is %f",c.area);
				break;
				
		case 3:printf("Enter the side of the square");
				scanf("%f",&s.side);
				s.area=s.side*s.side;
				printf("The area of the square is %f",&s.area);
				break;
		case 4:printf("Enter the length and height of the triangle");
				scanf("%f%f",t.lengthtraiangle,t.height);
				t.area=t.lengthtraiangle*t.height*0.5;
				printf("The area of the triangle is %f",t.area);
				
	}
	
}
