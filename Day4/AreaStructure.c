#include <stdio.h>
#include <stdlib.h>

struct area
{
	int a;
	int b;
	};
	void square(struct area s1)
			{
				printf("Enter the length = ");
				scanf("%d",&s1.a);
				printf("Area of square = %d ",s1.a*s1.a);
			}
void rectangle(struct area s2)
			{
				printf("Enter the length = ");
				scanf("%d",&s2.a);
				printf("Enter the breadth = ");
				scanf("%d",&s2.b);
				printf("Area of rectangle = %d ",s2.a*s2.b);
			}
	void triangle(struct area s3)
			{
				printf("Enter the base= ");
				scanf("%d",&s3.a);
				printf("Enter the height = ");
				scanf("%d",&s3.b);
				printf("Area of triangle = %f ",(float)0.5*s3.a*s3.b);
			}
	void circle(struct area s4)
			{
				printf("Enter the radius length = ");
				scanf("%d",&s4.a);
				printf("Area of circle = %f ",(float)3.14*s4.a*s4.a);
			}	
void main()
{
	struct area s1,s2,s3,s4;
	int x;
	printf("1.square 2.rectangle 3.triangle 4.circle\n");
	printf("Enter the choice  = ");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
		 square(s1);
		break;
		case 2:
		rectangle(s2);
		break;
		case 3:
		triangle(s3);
		break;
		case 4:
		circle(s4);
		break;
		default:
		printf("Enter the valid choise  = ");
			
	}
	
}
