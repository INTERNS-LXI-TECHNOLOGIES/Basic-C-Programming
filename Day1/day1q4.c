#include <stdio.h>
int main()
{
char Name[10];
printf("Enter your name\n");
scanf("%c",&Name);
char Designation[20];
printf("Enter your Designation\n");
scanf("%c",&Designation);
long int Basic_pay,HRA,PF,DA,Net_salary,a,b,c,d;
	printf("Enter Basic_pay\n");
	scanf("%ld",&Basic_pay);
	printf("Enter HRA\n");
	scanf("%ld",&HRA);
	
Net_salary=(Basic_pay>10000)?printf("%ld is the PF, %ld is the DA\n",PF=(0.15*Basic_pay),DA=(.6*Basic_pay)):(Basic_pay<=10000)?printf("%ld is thePF,%ld is the DA\n",PF=(.2*Basic_pay),(DA=.75*Basic_pay)):printf("wrong entery");
	Net_salary=Basic_pay+DA+HRA-PF;
	printf("%ld is the Net_salary",Net_salary);
	
	}