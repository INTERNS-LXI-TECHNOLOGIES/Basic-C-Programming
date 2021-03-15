    #include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	int D;
	float x,y,Roots;
	
	printf("____Enter coefficient of quadratic equation____\n");
	//scanf("%d,%d,%d,%d",&a,&b,&c);
	printf("a:");
	scanf("%f",&a);
	
	printf("b:");
	scanf("%f",&b);
	
	printf("c:");
	scanf("%f",&c);
	
	D=b*b-4*a*c;
	
	Roots=(D<0)?printf("no roots"):(D==0)?printf("equal roots"),x=-b/(2*a),printf("roots are :%f",x ):(D>0)?printf("Roots are real"),x=(-b+sqrt(D))/(2*a),y=(-b-sqrt(D))/(2*a),printf("  %f,%f",x,y):printf("wrong entry");
	
	}

	
