#include<stdio.h>
struct square
{
int a,area;
}j;
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
void sq(struct square j)
{
j.area=j.a*j.a;
printf("\n area is : %d",j.area);
}
union shape
{
struct square j;
struct rectangle r;
struct triangle t;
struct circle c;
}sp;
void main()
{
int a,n,c=0;


do
{
printf("\n enter your choice ");
printf("\n 1.area of square \n 2.area of rectangle \n 3.area of triangle \n 4.area of circle ");
printf("\n enter your choice: ");
scanf("%d",&n);
switch(n)
{
case 1:printf("\n enter the value of side: ");
       scanf("%d",&sp.j.a);
       sq(sp.j.a);
       //sp.s.area=sp.s.a*sp.s.a;
       //printf("\n area is : %d",sp.s.area);
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
       scanf("%f",&sp.c.radius);
       float pi=3.12;
       sp.c.area=pi*sp.c.radius*sp.c.radius;
       printf("\n area is: %f",sp.c.area);
       break;
default:printf("\n invalid choice ");
}
printf("\n if you want to continue (press yes=1|press no=0): ");
scanf("%d",&c);
}
while(c==1);
}
