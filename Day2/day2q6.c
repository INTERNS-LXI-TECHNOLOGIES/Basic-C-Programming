#include <stdio.h>
int main()
{
	int x,l;
	printf("Enter a number :");
	scanf("%d",&l);
	//printf("Enter the  number to end :");
	//scanf("%d",&u);
		//for(x=l;x<=u;x++)
	//{
		for(x=2;x<=l-1;x++)
		
		if(l%x==0)
			break;
			
		if(x==l)
			printf("%d is a prime number\n",l);	
			else
			printf("%d is not a  prime number\n",l);
		
	}
	
	
