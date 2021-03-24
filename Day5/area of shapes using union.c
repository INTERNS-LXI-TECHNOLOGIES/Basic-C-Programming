/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
struct triangle
{
    int breadth;
    int height;
    float constant;
    float area;
};
struct circle
{
    float PI;
    int radius;
    float area;
};
struct square
{
    int side;
    int area;
};
struct rectangle
{
    int width;
    int height;
    float area;
};
union shape
{
    struct triangle t;
    struct circle c;
    struct square s; 
    struct rectangle r; 
};  
int main()
{
    union shape obj;
    int ch;
    do
    {
    printf("\n \n1.triangle area\n 2.circle area\n 3.square area\n 4.rectangle area \n 0.exit \n");
    printf("enter your choice: \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("triangle\n");
    obj.t.breadth=20;
    obj.t.height=12;
    obj.t.constant= 0.5;
    printf("base: %d \n height: %d \n t: %f \n",obj.t.breadth,obj.t.height,obj.t.constant);
    obj.t.area=obj.t.breadth*obj.t.height*obj.t.constant;
    printf("area of triangle is : %.2f  ",obj.t.area);
    break;
    
    case 2:
    printf("circle\n");
    obj.c.PI=3.14;
    obj.c.radius=3;
    printf("radius: %d \n",obj.c.radius);
    obj.c.area=obj.c.PI*obj.c.radius*obj.c.radius;
    printf(" area of cicle : %f",obj.c.area);
    break;
    
    case 3:
    printf("square\n");
    obj.s.side=2;
    printf("side: %d \n",obj.s.side);
    obj.s.area=obj.s.side*obj.s.side;
    printf("area of square : %d",obj.s.area);
    break;
    
    case 4:
    printf("rectangle\n");
    obj.r.width=5;
    obj.r.height=3;
    printf("width: %d \n height : %d\n",obj.r.width,obj.r.height);
    obj.r.area=obj.r.width*obj.r.height;
    printf("area of rectangle :%f\n",obj.r.area);
    break;
    }
    }
    while(ch!=0);
    return 0;
}

