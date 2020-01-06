#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
int i,mod,n,p=0;
printf("Enter the number = "  );
scanf("%d",&n);
i=n;
while(n>0)
{	
	mod=n%10;
	p = p*10+mod;
	n= n/10;
	}
	printf("\nThe  number =\t%d",p) ;
	if (i==p)
	{
		printf("The number is palidrome ");
	}
}
