#include<stdio.h>
void main()
{	
	char name [20]
	float eng,mal,mat,sci,tot,per,

	printf("\n Enter student Name");
	scanf("%s",&name);
	
	printf("\n Enter English Mark - Max 100");
	scanf("%f",&eng);
	
	printf("\n Enter Malayalam Mark - Max 100");
	scanf("%f",&mal);
	
	printf("\n Enter Maths Mark - Max 100");
	scanf("%f",&mat);
	
	printf("\n Enter science Mark - Max 100");
	scanf("%f",&sci);
	
	tot=eng+mal+mat+sci
	per=(tot/400)*100;
	
	printf("\n Total Mark is %f",tot);
	printf("\n Total Percentage is %f",tot);
	
	
	if (per>90)
		{
			printf("\n Passed with First Class");
		}
	else if (per>70)
		{
			printf("\n Passed with Second Class");
		}
	else if (per>50)
		{
			printf("\n Passed with Third Class");
		}
	else (per<40)
		{
			printf("\n Failed");
		}
		
		return 0;
	
	}