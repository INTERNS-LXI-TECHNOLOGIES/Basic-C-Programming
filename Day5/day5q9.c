#include <stdio.h>
struct Employee{
	int Emp_No;
	char *name[20];
	int experince;
	long int salary;
}s1[];
	void data(struct Employee s1[]);
	int main(){
		int i;
		for(i=0;i<=2;i++)
		{
			printf("Enter employ no\n");
			scanf("%d\n",&s1[i].Emp_No);
			printf("Enter Employee Name\n");
			scanf("%s\n",&s1[i].name);
			printf("Enter experince\n");
			scanf("%d\n",&s1[i].experince);
			printf("Employee Salary\n");
			scanf("%ld\n",&s1[i].salary);
			}
			data(s1);
			}
			void data(struct Employee s1[]){
				int i;
		for(i=0;i<=2;i++)
		{
		printf("Employ no is %d\n",s1[i].Emp_No);
			printf("Emplyee name is %s\n",s1[i].name);
			printf("emplyo experience is %d\n",s1[i].experince);	
			printf("Employee Salary is %ld\n",s1[i].salary);
			if(s1[i].experince>8)
			printf("you have an increment\n\n");
		}
		}