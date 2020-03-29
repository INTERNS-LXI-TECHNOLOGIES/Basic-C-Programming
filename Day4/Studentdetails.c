#include<stdio.h>
#include<string.h>
struct stud
{
	char name[10];
	int rollnum;
	int m1,m2;
	
}s[5];


void search(int roll,struct stud a[])
{
	int j;
	for(j=0;j<5;j++)
	{
		if(a[j].rollnum==roll)
		{
			printf("%s details has been entered \n ",a[j].name);
		}
	}
}

void tot(int roll,struct stud a[])
{
	int j;
	for(j=0;j<5;j++)
	{
		if(a[j].rollnum==roll)
		{
			printf("Total Mark of %s = %d ",a[j].name,a[j].m1+a[j].m2);
		}
	}
	
}

void per( int roll,struct stud a[])
{
	int j;
	float p;
	for(j=0;j<5;j++)
	{
		if(a[j].rollnum==roll)
		{
			p=(a[j].m1+a[j].m2)/2;
			printf("Percentage of %s = %f",a[j].name,p);
		}
	}
}

void pri(struct stud s[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n***** STUDENT-%d*****\n",i
		+1);
		printf("Name => ");
		printf(" %s",s[i].name);
		printf("\nRoll Number => ");
		printf("%d",s[i].rollnum);
		printf("\nMark 1 => ");
		printf("%d",s[i].m1);
		printf("\nMark 2 => ");
		printf("%d",s[i].m2);
	}
}

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
	printf("Select the operation you need to perform \n [1] Search \n [2] Total Mark \n [3] Percentage \n [4] Display All \n [5] Quit \n") ;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter The Roll Number to be searched \n");
				scanf("%d",&roll);
				search(roll,s);
				break;
		case 2: printf("Enter the roll number of student \n");
				scanf("%d",&roll);
				tot(roll,s);
				break;
		case 3: printf("Enter the roll number of student \n");
				scanf("%d",&roll);
				per(roll,s);
				break;
		case 4: pri(s);
				break;
		default : break;
	
	}
	
}

