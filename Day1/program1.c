#include<stdio.h>
void main()
{
	int y,x,s,m,h,d,t;
	printf("\n CONVERSION CHOICES");
	printf("\n 1 . Convert to seconds");
	printf("\n 2 . Convert to minutes");
	printf("\n 3 . Convert to Hours");
	printf("\n 4 . Convert to Days");
	printf("\n 5 . Convert to Months");
	
	printf("Enter the number of years to be converted");
	scanf("%d", &y);
	
	printf(" \n Enter Your Choices");
	scanf("%d",&x);
	
	switch (x)
	{
		case 1 :
				m = y*365*24*60;
				printf("%d years = %ld minutes",m);
				break;
				
		case 2 :
				s = y*365*24*60*60;
				printf("%d years = %ld seconds",s);
				break;
			
		case 3 : 
				d = y*365 ;
				printf("%d years = %ld days",d);
				break;
				
		case 4 :
				t = y*365*12 ;
				printf("%d years = %ld Months",t);
				break; 
				
		case 5 :
				h = y*365*24 ;
				printf("%d years = %ld Hours",h);
				break;
		
		default:printf("\n invalid choice");

	}
}