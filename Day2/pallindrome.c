#include <stdio.h>
#include <stdlib.h>

void main()
{
int n,temp,mod,pal=0;

printf("Enter a number:");
scanf("%d",&n);
temp = n;
while(n>0)
{
	mod = n % 10;
	pal = pal*10+mod;
	n = n / 10;
	
}
if(pal == temp)

{
	printf("The number is pallindrome");
}

}