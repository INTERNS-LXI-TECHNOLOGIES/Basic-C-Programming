#include<stdio.h>
main()
{
	int i=0;
	float b_pay,hra=500,pf,da,net_sal;
	char name[10], designation[10];
	printf("Enter your Details :\n");
	printf("Name : ");
	scanf("%s",&name);
	printf("Designation: ");-
	scanf("%s",&designation);
	printf("Basic Pay: ");
	scanf("%f",&b_pay);
	if(b_pay<10000 )
	{
		da=(b_pay*.60);
		pf=(b_pay*.15);
	}
	else
	{
		da=(b_pay*.75);
		pf=(b_pay*.20);
	}
	net_sal=b_pay+da+hra-pf;
	printf("Name : %s \n Net Salery : %f ",name,net_sal);
}
