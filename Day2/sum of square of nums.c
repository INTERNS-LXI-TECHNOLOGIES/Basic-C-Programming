#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	int s=0;
	printf("enter the value for n");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		s += (i*i);
	}
	printf("the sum of squares of the number is %d",s);
}
