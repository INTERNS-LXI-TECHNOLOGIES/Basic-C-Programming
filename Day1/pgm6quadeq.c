#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c,d1,d2,r1,r2;
	printf("enter the values of the equations accordung to the order");
	scanf("%d %d %d",&a,&b,&c);
	d1=(b*b)-(4*a*c);
  d2=sqrt(d1);
	r1=(-b+d2)/(2*a);
	r2=(-b-d2)/(2*a);
	printf("the first root is %d",r1);
	printf("the second root is %d",r2);
	
}
