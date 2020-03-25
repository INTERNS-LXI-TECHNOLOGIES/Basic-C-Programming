#include<stdio.h>
main()
{
	int i,j;
	float p_amnt=100000,yrs=10,s_int,c_int,tot,monthly;
	printf("Simple intrest details");
	printf("\n*************************\n");
	for(i=0;i<10;i++)
	{
		s_int=100000*(0.125);
		printf("\n%dth Year : %f\n",i+1,s_int);
		
	}
	tot=p_amnt + s_int*10;
	printf("\n Final Amount = %f",tot);
	
	printf("\nCompound Intrest\n");
	printf("\n*************************\n");
	for(i=0;i<10;i++)
	{
		printf("\n %dth Year \n",i+1);
		for(j=3;j<=12;j=j+3)
		{
			monthly=(p_amnt*0.125)*3/12;
			printf("\n%dth Month intrest => %f",j,monthly);
			
			p_amnt=p_amnt+monthly;
		}
	}
	printf("\nPrincipal Amount = %f",p_amnt);
	
	
}
