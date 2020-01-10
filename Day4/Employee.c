#include <stdio.h>
#include <stdlib.h>

struct employee
{
	int empno;
	char name[25];
	int sal;
	int exp;
};


void display(struct employee e[]);

void main()
{
	struct employee e[5];
	printf("Enter Employees Details:\n");
	
	int i;
	int ch;
	for(i=1;i<3;i++)
	{
		printf("customer %d Details:\n",i);
		printf("Name:");
		scanf("%s",&e[i].name);
		printf("EmpNo:");
		scanf("%d",&e[i].empno);
		printf("Experience:");
		scanf("%d",&e[i].exp);
		printf("Salary:");
		scanf("%d",&e[i].sal);
		printf("\n");
	}	

	
	
		display(e);
}


void display(struct employee e[])
{
	int i;
	for(i=1;i<3;i++)
	{
		printf("---------------customer %d Details---------------\n",i);
		printf("Name: %s\n",e[i].name);
		printf("EmpNo: %d\n",e[i].empno);
		
		printf("Experience:%d\n",e[i].exp);
		if(e[i].exp>8)
		{
			e[i].sal = e[i].sal+ 5000;
		}
		
		
		printf("Salary:%d\n",e[i].sal);
		printf("\n");
	}	
}
