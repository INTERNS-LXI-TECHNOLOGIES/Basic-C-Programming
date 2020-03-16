#include<stdio.h>
#include<conio.h>
void main()
{
	char name,designation;
	int BASICPAY,HRA,PF,DA,NETSALARY;
	HRA=500;
	printf("Enter the name of the employee ");
	scanf("%s",&name);
	printf("Enter the  designation of the employee ");
	scanf("%s",&designation);
	printf("Enter the BASICPAY");
	scanf("%d",&BASICPAY);
	if(BASICPAY<10000)
	 {
		DA=BASICPAY*(50/100);
		PF=BASICPAY*(15/100);
	 }
   else
	{
		DA=BASICPAY*(75/100);
		PF=BASICPAY*(20/100);
	}
			NETSALARY=BASICPAY+DA+HRA-PF;
			printf("The netsalary of an employee is%d",NETSALARY);
}
