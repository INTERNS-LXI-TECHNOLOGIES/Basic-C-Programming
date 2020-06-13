#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g;
clrscr();
printf("\n enter the value for a: ");
scanf("%d",&a);
printf("\n enter the value for b: ");
scanf("%d",&b);
printf("\n enter the value for c: ");
scanf("%d",&c);
d=a*a;
e=b*b;
f=c*c;
g=d+e;
if(g==f)
{
printf("\n the sum is pythagorean triples",g);
}
else
{
printf("\n it is not pythagorean triples",g);
}
getch();
}
