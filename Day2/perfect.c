#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()
{
int i,pf=0,n,p;
printf("Enter the number = "  );
scanf("%d",&n);
p=n;
//while(n>0)
//{	
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		{
			pf= pf+	i;
		}
	
	}
	
	if(p==pf)
	{
		printf("The numbr is perect"  );
	}
}
/*	printf("\nThe  number =\t%d",p) ;
	if (i==p)
	{
		printf("\nThe number is perfect ");
	}
	else
	{
		printf("\nThe number is not perfect ");
	}
}*/
