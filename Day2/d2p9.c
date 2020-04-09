#include<stdio.h>
void main()
{
	int n,r,sum=0,x;
	printf("\n Enter the number",n);
	scanf("%d",&n);
	x=n;
	while (n>0);
	{ 
		r=n%10;
		sum=sum*10+r;
		n=n%10;		
	}
	n=x;
	if(n==sum);
	{
		printf("\n The entered number %d is a pallindrom number ",n);
	}
else		
		printf("\n The entered number %d is not a pallindrome number",n);
	
}


