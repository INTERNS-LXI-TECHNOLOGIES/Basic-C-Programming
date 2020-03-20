#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,n1=0,n2=1,n3;
	printf("enter the limit");
	scanf("%d",&n);
	printf("the series are");
	
		for(i=1;i<=n;i++)
		{
			printf("%d",n1);
			n3=n1+n2;
			n1=n2;
			n2=n3;
							
		}
		
	
}
