#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,r1,r2;
	printf("Enter the coef.");
	scanf("%f%f%f",&a,&b,&c);
	d= sqrt((b*b)-(4*a*c));
	r1=(-b+d)/(2*a);
	r2=(-b-d)/(2*a);
	printf("Roots are R1= %f \n R2 = %f \n",r1,r2);
	
}
