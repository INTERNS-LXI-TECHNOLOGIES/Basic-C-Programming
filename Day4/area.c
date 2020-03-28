#include<stdio.h>
#include<conio.h>
float areasquare(float,float);
float areatriangle(float,float);
float areacircle(float);
void main()
{
	float lr,br,lt,ht,r,a,b,c,ar,at,ac;
	printf("enter the length of rectangle");
	scanf("%f",&lr);
	printf("enter the breadth of rectangle");
	scanf("%f",&br);
	
	printf("enter the length of triangle");
	scanf("%f",&lt);
	printf("enter the height of rectangle");
	scanf("%f",&ht);
	
	printf("enter the radius of circle");
	scanf("%f",&r);
	
	a=areasquare(ar);
	printf(" the area of square is %f\n",a);
	
	b=areatriangle(at);
	printf("the area of triangle is %f\n",b);
	
	c=areacircle(ac);
	printf("the area of circle is %f\n",c);
	
}

float areasquare(float lr,floatlb)
{
	
	float ar;
	ar=lr*br;
	return ar;
}

float areatriangle(float lt,float ht)
{
	float at;
	at=(lr*br)/2;
	return at;
}

float areacircle(float r,)
{
	float ac;
	ac=3.14*r*r;
	return ac;
}







