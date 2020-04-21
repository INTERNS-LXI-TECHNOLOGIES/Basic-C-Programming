#include<stdio.h>
struct employee
{
	char name[10];
	int regno;
	int salary;
	int exp;
	
}e[15];

void read(struct employee e[])
{
	int i=0;
	for(i=0;i<15;i++)
	{
		printf("EMPLOYEE DETAILS",i+1);
		printf("Enter the name of the employee");
		scanf("%s",&e[i].name);
		printf("Enter the employe's reg no no");
		scanf("%d",&e[i].regno);
		printf("enter the emp salary");
		scanf("%d",&e[i].salary);
		printf("enter the emp experience");
		scanf("%d",&e[i].exp);
	}
}

void display(struct employee e[])
{
	int i=0;
	int salary =0;
	for(i=0;i<15;i++)
	{
		printf("\n DETAILS",i+1);
		printf("%s",&e[i].name);
		printf("%d",&e[i].regno);
		printf("%d",&e[i].salary);
		printf("%d",&e[i].exp);
	}
	
	if(e[i].exp>8)
	{
		printf("salary = %d",e[i].salary+3000);
		
	}
	else
	{
		printf("salary = %d",e[i].salary);
	}

}

void main()
{
	
	read(e);
	display(e);
}



	
