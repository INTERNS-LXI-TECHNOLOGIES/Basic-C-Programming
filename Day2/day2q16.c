#include <stdio.h>
int main()
{
	int a,b,d,e,i;
	 long g;
	printf("Enter the number\n");
	scanf("%d",&a);
	d=a;
	e=0;
	g=1;
	while(a>0){
		b=a%10;

	
		g=1;
		//sum=0;
		for(i=1;i<=b;i++)
		{
			g=g*i;
		
			}
		e=e+g;
		a=a/10;
			}
	    
		if(e==d)
				
		printf("The number is strong %d");
		else 
		printf("The number is not strong %d");
	
	}

