#include<stdio.h>
void main()
{
	int n,r,c,sum,x;
	printf("\n Enter the number",n);
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
			
	}
	n=x;
	if (n==sum)
		
		printf("\n The given number is an Amstrong number",n);
		
	
	else 
		printf("\n The given number is not an Amstrong number",n);


}