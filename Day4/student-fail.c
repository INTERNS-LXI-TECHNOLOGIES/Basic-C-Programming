#include<stdio.h>
struct stud
{
	int rno,m[3];
	char name[10];
}s[15];

main()
{
	int i,j;
	float p,sum;
	printf("Enter the details of students \n");
	for(i=0;i<15;i++)
	{
		printf("*******STUDENT %d *******\n",i+1);
		printf("Enter the name : ");
		scanf("%s",&s[i].name);
		printf("\nEnter the roll number");
		scanf("%d",s[i].rno);
		for(j=0;j<3;j++)
		{
			printf("Mark %d = ",j+1);
			scanf("%d",&s[i].m[j]);
		}
	}
	
	printf("Failed Student Details :");
	for(i=0;i<15;i++)
	{
		sum=0;
		p=0;
		for(j=0;j<3;j++)
		{
			sum+=s[i].m[j];
		}
		p=(sum/90)*100;
		if(p<40)
		{
			printf("\nName = %s ",s[i].name);
			for(j=0;j<3;j++)
			{
				printf("\nMark %d = %d",j+1,s[i].m[j]);
			}
			printf("\nSum= %f",sum);
			printf("\nPercentage = %f",p);
		}
	}
	
}
