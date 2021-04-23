#include <stdio.h>
struct figures{
	int breath;
	union {
	 struct {
	 	}square;
	 	struct 
	 	{
	 	int length;
	 	}Rectangle;
	 	struct 
	 	{
	 	int height;
	 		int base;	
	 	}triangle;
	 	struct 
	 	{
	 	int radius;
	 }circle;
	 	}area;
	 	
	 	};
	
int main(){
	struct figures shapes;
	
	 printf("Area of square\n");	
	printf("Enter the length of side of a square\n");
	scanf("%d",&shapes.breath);
	printf("area of square is : %d sq unit",(shapes.breath*shapes.breath));
	
	
printf("\n\nArea of Rectangle\n");	
	printf("Enter the length and breath of side of the Rectangle: Breath,length\n");
	scanf("%d,%d",&shapes.breath,&shapes.area.Rectangle.length);
	printf("area of rectangle is : %d sq unit",(shapes.breath*shapes.area.Rectangle.length));

	printf("\n\nArea of Triangle\n");	
	printf("Enter the height and base of side of the triangle: height,base\n");
	scanf("%d,%d",&shapes.area.triangle.height,&shapes.area.triangle.base);
	printf("area of rectangle is : %.2f sq unit",(shapes.area.triangle.height*shapes.area.triangle.base*0.5));

	
	printf("\n\nArea of circle\n");	
	printf("Enter the radius of the circle:\n");
	scanf("%d",&shapes.area.circle.radius);
	printf("area of rectangle is : %.2f sq unit",(shapes.area.circle.radius*shapes.area.circle.radius*3.14));

	return 0;
}
