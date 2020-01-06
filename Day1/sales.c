#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
	int s,a;
char ch;
printf("Enter the Name  = ");
scanf("%c",&ch);
printf("Enter the sales amount = ");
scanf("%d",&s);
if(s<10000)
	{
	printf(	"\nyou have no commision ");
	}
else if(s>=10000&&s<30000)	
	{
	a=s*15/100;
	printf(	"\nyour commision is =%d ",a);	
	
	}
else if(s>30000)	
	{
		a=s*25/100;
		printf(	"\nyour commision  = %d",a);
		printf(	"\nAnd you have bonus of 1000, Total = ",s+1000);
	}
}