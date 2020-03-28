#include<stdio.h>
#include<conio.h>
float feetofinches(float);
void main()
{
	float inches,feet;

	feet=feetofinches(feet);
	printf(" the length in feet is %f\n",feet);
}


float feetofinches(float inches )
{
	float feet;
	printf("enter  the length in inches");
	scanf("%f",&inches);

	feet=inches/12.0;
	return feet;
}
