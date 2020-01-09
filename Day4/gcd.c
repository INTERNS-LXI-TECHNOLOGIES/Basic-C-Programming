#include <stdio.h>
#include <stdlib.h>
int inchtofeet(float);
void main()
{
int a,b;	
printf("Enter two values=\n");
scanf("%d",&a);
scanf("%d",&b);
gcd(a,b);
}

void gcd(int a,int b)
{
	int i,gcd;
for(i=1;i<=a && i<=b;i++)
{
	if((a % i==0) && (b % i==0))
	{
		gcd = i;
	}
}
printf("GCD=\%d",gcd);

}