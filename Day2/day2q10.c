#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,sum=0,d,e=0;
	printf("Enter a number\n");
	scanf("%d",&a);
	b=a;
	//while(b!=0){
	//	b=b/10;
	//	e++;
	//	}
	
	b=a;
	while(a!=0)
	{
	c=a%10;
		//d=c*c*c;
		sum=sum+pow(c,e);	
		a=a/10;
	}
	if(sum==b)
	printf("the number is Amstrong %d",sum);
	else
	printf("the number is not Amstrong %d",sum);
	}

