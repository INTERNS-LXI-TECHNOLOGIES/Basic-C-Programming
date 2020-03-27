#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[30];
	float percentage;
};

int  main()
{
	int i;
	struct student record1={1,"Raju",80.5};
	struct student *ptr;
	
	ptr=&record1;
	
	printf("RECORD OF STUDENT1\n");
	printf("Id is:%d\n",ptr->id);
		printf("Name is %d\n",ptr->name);
		printf("Percentage is %f\n",ptr->percentage);
	}
	
