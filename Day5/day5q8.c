#include <stdio.h>
struct students{
	int reg_No;
	char *name[20];
	int mark1;
     int mark2;
	int mark3;
}s1[];
	void data(struct students  s1[]);
	int main(){
		int i;
		for(i=0;i<=14;i++)
		{
			printf("Enter student no\n");
			scanf("%d\n",&s1[i].reg_No);
			printf("Enter student Name\n");
			scanf("%s\n",&s1[i].name);
			printf("Enter percentage in 1st subject \n");
			scanf("%d\n",&s1[i].mark1);
			printf("Enter percentage in 2nd subject \n");
			scanf("%d\n",&s1[i].mark2);
			printf("Enter percentage in 3rd subject \n");
			scanf("%d\n",&s1[i].mark1);
	}data(s1);
			}
			void data(struct students  s1[]){
				int i;
		for(i=0;i<=14;i++)
		{
			if(s1[i].mark1<40&&s1[i].mark2<40 ||s1[i].mark1<40&&s1[i].mark3<40||s1[i].mark2<40&&s1[i].mark3<40){
		printf("\n\nRegister no is %d\n",s1[i].reg_No);
			printf("student name is %s\n",s1[i].name);
			printf("percentage in subject 1 %d\n",s1[i].mark1);	
			printf("percentage in subject 2 %d\n",s1[i].mark2);	
			printf("percentage in subject 3 %d\n",s1[i].mark3);	
		}
		}
		}
