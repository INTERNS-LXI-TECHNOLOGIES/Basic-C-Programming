#include<stdio.h>
struct rect
{
	int len,breadth;
	int area;
}r1;
struct sqr
{
	int len;
	int area;
}s1;

struct tri
{
	float base,height;
	float area;
}t1;

struct circle
{
	float r;
	float area;
}c1;

main()
{
	int ch;
	printf("\n \t Enter Your Choice \n [1] Rectangle \n [2] Square \n [3] Triangle \n [4] Circle \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				printf("Enter the length and breadth of Rectangle \n");
				scanf("%d%d",&r1.len,&r1.breadth);
				r1.area= r1.len*r1.breadth;
				printf("Area of Rectangle = %d",r1.area);
				break;
		case 2: printf("Enter the side of sqr\n");
				scanf("%d",&s1.len);
				s1.area= s1.len*s1.len;
				printf("Area of sqr = %d",s1.area);
				break;
		case 3: printf("Enter the base and height of Triangle\n");
				scanf("%f%f",&t1.base,&t1.height);
				t1.area=0.5*(t1.base*t1.height);
				printf("Area of Triangle = %f",t1.area);
				break;
		case 4: printf("Enter the radious of Circle\n");
				scanf("%f",&c1.r);
				c1.area=3.14*(c1.r*c1.r);
				printf("Area of circle = %f",c1.area);
				break;
		case 5: printf("\n Invalid Choice\n");
				break;
	}
	
	
}
