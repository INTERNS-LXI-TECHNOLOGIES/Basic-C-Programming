#include<stdio.h>
#include<math.h>
void main()
{
float p, t, r, si, ci;
printf("Enter principal amount");
scanf("%f", &p);
printf("Enter time in year");
scanf("%f", &t);
printf("Enter rate in percent");
scanf("%f", &r);
si = (p * t * r)/100.0;
ci = p * (pow(1+r/100, t) - 1);
printf("Simple Interest = %0.3f\n", si);
printf("Compound Interest = %0.3f", ci);
}
