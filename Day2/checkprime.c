#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=0;
	printf("enter the number");
	scanf("%d",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	 	if(n==1)
	 {
	 	printf("the number is not prime");
	 }
	 	else
	 	{
	 		if(flag=0)
	 		printf("the number is  prime");
		 }
	 
}
