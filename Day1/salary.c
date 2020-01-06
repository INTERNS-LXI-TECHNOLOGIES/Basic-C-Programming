#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
	
char name[10];
float bp,pf,da,netsal;
printf("name");
gets(name);
printf("Enter bp:");
scanf("%f",&bp);
printf("Enter pf:");
scanf("%f",&pf);
printf("Enter da:");
scanf("%f",&da);



if(bp<10000)
{
	da = bp*60/100;
	pf = bp*15/100;
	int hra=500;
	netsal = bp+da+hra-pf;
	printf("net salary is = %f",netsal);
	
}

if(bp>=10000)
{
	da = bp*75/100;
	pf = bp*20/100;
	int hra=500;
	netsal = bp+da+hra-pf;
	
	printf("net salary is = %f",netsal);	
}


}	
	
  