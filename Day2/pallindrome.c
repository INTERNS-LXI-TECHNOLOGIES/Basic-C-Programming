#include<stdio.h>
void main()
{
	int b,n,rev=0,c;
	printf("/n enter the no:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
	b=n%10;
	rev=(rev*10)+b;
	n=n/10;
	}
	printf("/n Reverse of the no:=%d",rev);
	if(rev==c)
	printf("/n The no: is pallindrome");
  else
  printf("/n The no: is not pallindrome");
  }