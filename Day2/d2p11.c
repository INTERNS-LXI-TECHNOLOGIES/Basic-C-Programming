#include<stdio.h>
void main()
{
	int n,i,sum=0;
	prinf("\n Enter the number to check whether it is perfect or not",n);
	scanf("%d",&n);
	
	for (i=1, i<n i++);
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	
	if(n==sum);
	printf("\n The given number %d is a perfect number",sum );
	else
	printf("\n The given number %d is not a perfect number",sum );
}