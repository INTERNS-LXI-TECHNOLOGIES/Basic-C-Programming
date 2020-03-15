#include<stdio.h>
#include<conio.h>
void main()
{
	int english,maths,science,social,hindi,total,marks,result;
	float percentage;
	printf("enter the marks for the five subjects in the order(english,maths,science,social,hindi)");
	scanf("%d %d %d %d %d",&english,&maths,&science,&social,&hindi);
	marks=english+maths+science+social+hindi;
	total=500;
		printf("%d",marks/500);
	percentage=(float)marks/500*100.0;
	if(english>45)
	{
		printf("passed in english");
	}
		else
		{
			printf("failed in english");
	}
	if(maths>45)
	{
		printf("passed in maths");
	}
	else
	{
		printf("failed in maths");
	}
	if(science>45)
	{
		printf("passed in science");
	}
	else
	{
		printf("failed in science");
	}
	if(social>45)
	{
		printf("passed in social");
	}
	else
	{
		printf("failed in social");
	}
	if(hindi)
	{
		printf("passed in hindi");
	}
	else
	{
		printf("failed in hindi");
	}
	printf("the totalmarks obtained are %d",marks);
	printf("the percentage obtained is %f",percentage);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

