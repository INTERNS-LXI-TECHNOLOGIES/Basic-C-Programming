#include <stdio.h>
 
struct student
{
    char    name[30];
    int     roll;
    float total mark;
    float   perc;
};
s[5];
main()
{
	int i,ch,roll;
	
	printf("Enter The Student Details \n ");
	for(i=0;i<5;i++)
	{
		printf("\n***** STUDENT-%d*****\n",i+1);
		printf("Name => ");
		scanf(" %s",&s[i].name);
		printf("Roll Number => ");
		scanf("%d",&s[i].rollnum);
		printf("Mark 1 => ");
		scanf("%d",&s[i].m1);
		printf("Mark 2 => ");
		scanf("%d",&s[i].m2);
	}

