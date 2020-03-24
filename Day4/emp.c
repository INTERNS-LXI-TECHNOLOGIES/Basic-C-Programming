#include<stdio.h>
struct  emp
{
	int no,salery,exp;
	char name[20];
}e[15];

void read(struct emp e[])
{
	int i;
	for(i=0;i<15;i++)
	{
		printf("\n     EMPLOYEE %d     ",i+1);
		printf("\n*********************");
		printf("\nEnter the employee number => ");
		scanf("%d",&e[i].no);
		printf("\nEnter the employee name =>");
		scanf("%s",&e[i].name);
		printf("\nEmployee Salery => ");
		scanf("%d",&e[i].salery);
		printf("\nEmployee Experience =>");
		scanf("%d",&e[i].exp);
		
	}
}

void disp(struct emp e[])
{
	int i=0;
	for(i=0;i<15;i++)
	{
		printf("\n     EMPLOYEE %d     ",i+1);
		printf("\n*********************");
		printf("\nName => %s",e[i].name);
		printf("\nNumber => %d",e[i].no);
		printf("\nExperience => %d",e[i].exp);
		if(e[i].exp>8)
		{
			printf("\nSalery => %d (Incremented by 1000)",e[i].salery+1000);
		}
		else
		{
			printf("\nSalery => %d",e[i].salery);
		}
	}
}

main()
{
	read(e);
	disp(e);
}
