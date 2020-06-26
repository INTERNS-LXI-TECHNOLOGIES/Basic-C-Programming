#include<conio.h>
#include<stdio.h>
struct square
{
int a,area;
};
struct rectangle
{
int length,breadth,area;
};
struct triangle
{
int height,base,area;
};
struct circle
{
float radius,area;
};
union shape
{
struct square s;
struct rectangle r;
struct triangle t;
struct circle c;
};
void main()
{
int ch,c=0;
clrscr();
union shape sp;
do
{
printf("\n area of geometric figures ");
printf("\n..........................");
printf("\n 1.area of square \n 2.area of rectangle \n 3.area of triangle \n 4.area of circle ");
printf("\n enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n enter the value of side: ");
       scanf("%d",&sp.s.a);
       sp.s.area=sp.s.a*sp.s.a;
       printf("\n area is : %d",sp.s.area);
       break;
case 2:printf("\n enter the length and breadth: ");
       scanf("%d %d",&sp.r.length,&sp.r.breadth);
       sp.r.area=sp.r.length*sp.r.breadth;
       printf("\n area is : %d",sp.r.area);
       break;
case 3:printf("\n enter the height and base: ");
       scanf("%d %d",&sp.t.height,&sp.t.base);
       sp.t.area=(sp.t.height*sp.t.base)/2;
       printf("\n area is : %d",sp.t.area);
       break;
case 4:printf("\n enter the radius: ");
       scanf("%d",&sp.c.radius);
       float pi=3.12;
       sp.c.area=pi*sp.c.radius*sp.c.radius;
       printf("\n area is: %d",sp.c.area);
       break;
default:printf("\n invalid choice ");
}
printf("\n if you want to continue (press yes=1|press no=0): ");
scanf("%d",&c);
}
while(c==1);
getch();
}
