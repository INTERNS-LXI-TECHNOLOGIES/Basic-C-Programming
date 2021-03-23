#include <stdio.h>
int main()
{
	int a,b,x;
	printf("Enter first numbers to find LCM\n");
	scanf("%d",&a );
	printf("Enter second numbers to find LCM\n");
	scanf("%d",&b);
	
	for(x=1;x<=a*b;x++)
	if(x%a==0 && x%b==0)
	break;
	
	
	printf("LCM is %d",x);
	}
