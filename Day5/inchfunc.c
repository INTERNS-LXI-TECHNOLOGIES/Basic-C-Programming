#include<stdio.h>
float conv(float a);

void main()
{
float f;
printf("enter the value to be converted to inches \n");
scanf("%f",&f);
conv(f);
}

float conv(float a)
{
float feet;
feet = a/12;
printf("\n inches to feet is %f \n",feet);
return 0;
}
