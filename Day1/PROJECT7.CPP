#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
double root1,root2,root,d,real,imag;
int a,b,c;
clrscr();
printf("\n enter the coefficients: ");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0)
{
root=(-b)/(2*a);
}
if(d>0)
{
root1=(-b + sqrt(d))/(2*a);
root2=(-b - sqrt(d))/(2*a);
printf("\n the square root of quadratic equation is: %lf %lf ",root1,root2);
}
else
{
real=(-b)/(2*a);
imag=(sqrt(-d))/(2*a);
printf("\n %lf+%lf i",real,imag);
printf("\n %lf-%lf i",real,imag);
}
getch();
}
