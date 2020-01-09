#include <stdio.h>
#include <stdlib.h>

union area
{
	int a;
	int b;
	};
	
void main()
{
	union area s;
	union area ss;
		int x;
	printf("1.square 2.rectangle 3.triangle 4.circle\n");
	printf("Enter the choice  = ");
	scanf("%d",&x);
	
	if(x==1)
	{
				printf("Enter the length = ");
				scanf("%d",&s.a);
				printf("Area of square = %d ",s.a*s.a);
	}
	else if(x==2)
	{
				printf("Enter the length = ");
				scanf("%d",&s.a);
				printf("Enter the breadth = ");
				scanf("%d",&ss.b);
				printf("Area of rectangle = %d ",s.a*ss.b);
	}
	else if(x==3)
	{
		printf("Enter the base= ");
				scanf("%d",&s.a);
				printf("Enter the height = ");
				scanf("%d",&ss.b);
				printf("Area of triangle = %f ",(float)0.5*s.a*ss.b);
	}
	else if(x==4)
	{
		printf("Enter the radius length = ");
				scanf("%d",&s.a);
				printf("Area of circle = %f ",(float)3.14*s.a*s.a);
	}

}
