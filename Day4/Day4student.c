#include<stdio.h>
#include<conio.h>

struct student
{
	int regno;
	float mark[3];
	char name[15];
}s[15];

void main()
{

float sum,f;
	sum=0.0;
	f=0;

	int i,j;
	printf("Enter the details of the students");
	for(i=0;i<15;i++)
	{
		printf("Enter the name");
		scanf("%s",&s[i].name);
		printf("Enter the register number");
		scanf("%d",&s[i].regno);
		for(j=0;j<3;j++)
		{
		printf("enter the 3 marks of students");
		scanf("%d%d",&s[i].mark);
	}
}
	
printf("The failed students are");
	for(i=0;i<15;i++)
	{
		sum=0;
		f=0;
		for(j=0;j<3;j++)
		{
			sum+=s[i].m[j];
		}
		f=(sum/150)*100;
		if(p<40)
		{
			printf("\nName = %s ",s[i].name);
			for(j=0;j<3;j++)
			{
				printf("\nMark %d = %d",j+1,s[i].m[j]);
			}
			printf("\nSum= %f",sum);
			printf("\nPercentage = %f",f);
		}
	}
	
}
