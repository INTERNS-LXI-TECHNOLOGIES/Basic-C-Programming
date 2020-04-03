#include <stdio.h>
void main()
{
	float Basic_Pay, HRA=500,PF, DA, NET_SAL;
	char name[25], des[25];

	printf("\n  Name of Employee : ");
        scanf("%s",&name);

	printf("\n Employee's Designation : ");
	scanf("%s",&des);

  	printf("\n Enter the Basic Pay of an Employee  :  ");
  	scanf("%f",&Basic_Pay);
  
  	if (Basic_Pay < 10000)
  	{
  		PF=(Basic_Pay*15) / 100;
		DA = (Basic_Pay * 60) / 100; 	
  	} 
  	else if(Basic_Pay >= 10000)
  	{
  		PF= (Basic_Pay * 20) / 100;
	  	DA = (Basic_Pay * 75) / 100;  	
  	}
  	
	NET_SAL = Basic_Pay+DA+HRA-PF;
	printf("\n Net Salary of this Employee  =  %.2f", NET_SAL); 
	
}
