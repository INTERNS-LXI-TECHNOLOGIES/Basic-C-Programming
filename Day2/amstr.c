#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
int i,am,n,p=0;
printf("Enter the number = "  );
scanf("%d",&n);
i=n;
while(n>0)
{	
	am=n%10;
	p = p+am*am*am;
	n= n/10;
	}
	printf("\nThe  number =\t%d",p) ;
	if (i==p)
	{
		printf("\nThe number is amstrong ");
	}
	else
	{
		printf("\nThe number is not amstrong ");
	}
}
