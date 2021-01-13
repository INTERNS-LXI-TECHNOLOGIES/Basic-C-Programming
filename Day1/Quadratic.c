#include <stdio.h>

int main()
{
printf("Quadratic Equation(ax2+bx+c=0)----- Need to Find x or roots ......");
int a,b,c,det;
float root,root1,root2,real,imag;

printf("\n Enter Value a.b,c");
scanf("%d%d%d",&a,&b,&c);
det=b*b-4*a*c;
printf("\n Determinant %d",det);

if(det==0)
{
root=-b/(2*a);
printf("\n  Only one Root ");
printf("\n  Root %f",root);
}
else if(det>0)
{
printf("\n Two roots");

root1=-b/(2*a)+sqrt(det)/(2*a);
root2=-b/(2*a)-sqrt(det)/(2*a);
printf("\n Root 1 %f",root1);
printf("\n Root 2 %f",root2);
}
else if(det<0)
{
printf("\n Two roots of Complex Numbers");
real=-(b/2*a);
imag=  sqrt(-det)/2*a;
printf("\n 1st Complex Number %f + %f i",real,imag);
printf("\n 2nd Complex Number %f - %f i",real,imag);
}

    return 0;
}
