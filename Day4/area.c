#include<stdio.h>
struct shape
{
	float length;
	float breadth;
	float radius;
	float side;
	float lengthtraiangle;
	float height;
	float area;
}s;
void main()
{
	int ch;
	printf("enter the choice 1)Rectangle 2)Circle 3)Square 4)Triangle");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Enter the length and breadth of rectangle");
				scanf("%f%f",&s.length,&s.breadth);
				s.area=s.length*s.breadth;
				printf("The area of rectangle is %f",s.area);
				break;
		case 2:printf("Enter the radius of the circle");
				scanf("%f%f",&s.radius);
				s.area=3.14*s.radius*s.radius;
				printf("The area of the circle is %f",s.area);
				break;
				
		case 3:printf("Enter the side of the square");
				scanf("%f",&s.side);
				s.area=s.side*s.side;
				printf("The area of the square is %f",&s.area);
				break;
		case 4:printf("Enter the length and height of the triangle");
				scanf("%f%f",s.lengthtraiangle,s.height);
				s.area=s.lengthtraiangle*s.height*0.5;
				printf("The area of the circle is %f",s.area);
				
	}
	
}
