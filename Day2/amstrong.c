#include<stdio.h>
void main()
{
	int s=0,n,b,i;
	printf("/n Enter the nu");
	scanf("%d",&n);
	for(i=n;i>0;i=1/10)
	{
		b=i%10;
		s=s+(b*b*b);
	}
	if(n==s)
	{
	printf("the no;is amstrong");
	}
	else
	{
	printf("the no: is not amstrong");
	}
}