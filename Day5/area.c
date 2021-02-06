#include<stdio.h>

struct area{
int square,rectangle,triangle,circle;
};
struct area square{
int side;
};
{
int side;
printf(" area of the square is %d ", square.side);
square=side * side;
}
struct area rectangle{
int length ,breadth ;
};
{
int length ,breadth;
printf(" area of rectangle is %d",rectangle.length*breadth);
rectangle=length * breadth;
}
struct area triangle{
float height,base;
};
{
float height,base;
printf(" area of triangle is %f",triangle.0.5*height*base);
triangle=0.5*height*base;

}
struct area circle{
float pi=3.14,r;
};
{
float pi= 3.14,r;
printf(" area of circle  is %f",circle.r);
circle=3.14*r*r;
}
do
{
int n;
printf(" enter your choice ");
printf(" \n 1.square\n \n 2.rectangle\n \n 3.triangle \n \n 4.circle\n ")
scanf("%d",&n);
switch(n)
{
case 1:
printf(" enter the value of the side ");
scanf("%d",&square.side);
break;
case 2:
printf(" enter the length and breadth of the rectangle ");
scanf("%d%d",&rectangle.length*breadth);
break;
case 3:
printf(" enter the height and base of the triangle ");
scanf("%d%d",&triangle.0.5*height*base);
break;
case 4:
printf(" enter the vale of r :");
scanf("%d",&circle.r);
break;
defualt:printf("\n invalide choice ");
}
}