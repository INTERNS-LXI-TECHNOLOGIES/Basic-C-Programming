#include <stdio.h>
#include <stdlib.h>
float inchtofeet(float);
void main()
{
float in,ft;	
printf("Enter inch value=\n");
scanf("%f",&in);
ft = inchtofeet(in);
	printf("%f\t inch is equal to %f\t feet",in,ft);
}

float inchtofeet(float in)
{
	float feet = in/12;
	return feet;
}

