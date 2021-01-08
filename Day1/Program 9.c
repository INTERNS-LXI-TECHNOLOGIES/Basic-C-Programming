#include <stdio.h>
#include<conio.h>
int main() 
{
	float sec,h,m,s;
	printf("Input seconds:");
	scanf("%f",&sec);
	h=(sec/3600); 
	m=(sec-(3600*h))/60;
	s=(sec-(3600*h)-(m*60));
	printf("Hour-%f",h);
	{
	printf("Minute-%f",m);
	}
	printf("Second-%f",s);
	{
	return 0;
	}
}