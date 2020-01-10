


#include <stdio.h>
#include <stdlib.h>

struct student 
{
	char name[25];
	int rollno;
	int m1,m2,m3,tmark;
	float per;
};
void totalmark(struct student s[]);
void search(struct student s[]);
void display(struct student s[]);
void percentage(struct student s[]);
void main()
{
	int i;
	int ch;
	struct student s[5];
	printf("Details:\n");
	for(i=1;i<=2;i++)
	{
		printf("Student %d Details:\n",i);
		printf("Name:");
		scanf("%s",&s[i].name);
		printf("Rollno:");
		scanf("%d",&s[i].rollno);
		printf("Mark1:");
		scanf("%d",&s[i].m1);
		printf("Mark2:");
		scanf("%d",&s[i].m2);
		printf("Mark3:");
		scanf("%d",&s[i].m3);
	}	
display(s);
}




void display(struct student s[])
{
	int i;
	for(i=1;i<=2;i++)
	{
		printf("student %d:",i);
		printf("\n--------------");
		printf("\nName:%s",s[i].name);
		printf("\nRollno:%d",s[i].rollno);
		printf("\nMark1:%d",s[i].m1);
		printf("\nMark2:%d",s[i].m2);
		printf("\nMark3:%d",s[i].m3);
		printf("\nTotal Mark:%d\n",s[i].m1+s[i].m2+s[i].m3);
		s[i].per = (float)(s[i].m1+s[i].m2+s[i].m3)/300*100;
		printf("Percentage:%f \n",s[i].per);
		if(s[i].per>40.00)
		{
			printf("\tYou Are Passed ");
		}
		else
		{
			printf("\tYou Are Failed ");	
		}
		printf("\n");
	}
	
}