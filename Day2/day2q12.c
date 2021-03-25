#include <stdio.h>
#include <math.h>
int main()
{
	float  a,b,c;
    float SI,d,e,f,g;
	printf("Enter the Amount\n");
	scanf("%f",&a);
	printf("Enter the Rate of interest\n");
	scanf("%f",&b);
	printf("Enter the time period\n");
	scanf("%f",&c);
	
	//simple interest
	SI=(a*b*c)/100;
	d=SI+a;
	//compound Interest
	e=(1+(b/100));
	f=pow(e,c);
	g=f*a;
	printf("%.2f is the simple interest\n",d);
	printf("%.2f is the compound Interest\n",g);
	}
	

