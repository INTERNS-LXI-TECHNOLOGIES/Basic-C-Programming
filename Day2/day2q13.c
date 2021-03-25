#include <stdio.h>
#include <math.h>
int main()
{
	float  a,b,c;
    float SI,d,e,f,g,h,i;
	printf(" the Amount is 10 lakh \n");
	a=1000000;
	printf("the Rate of interest is 12.5\n");
	b=12.5;
	printf("the time period is 10 years \n");
	c=10;
	
	//simple interest
	//SI=(a*b*c)/100;
	//d=SI+a;
	//compound Interest yearly 
	e=(1+(b/100));
	f=pow(e,c);
	h=f*a;
//printf("%.2f is the simple interest\n",d);
	printf("%.2f is the compound interest\n",f);
	//compound  interest quaterly
	//e=(1+(b/100));
	i=pow(e,4*c);
	g=i*a;
	printf("%.2f is the compound interest quaterly\n",i);
	
	}
	

