#include<stdio.h>
void main()
{
	int x,y,z,a,b;
	
	printf ("\n Enter Four number to compare");
	scanf("%d %d %d %d",x,y,z,a);
	
	b = (x>y && x>z && x>a) ? x : (y>z && y>a) ? y : (z>a) ? z : a ;
	printf(" The Largest Number Is %d %d %d %d ",b,x,y,z,a);
	
}