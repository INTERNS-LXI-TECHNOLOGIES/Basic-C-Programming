#include<stdio.h>
main()
{
	int a,b,min;
	printf("Enter the 2 numbers");
	scanf("%d%d",&a,&b);
	min=(a>b)?a:b;
	while(1)
	{
		if(min%a==0 && min%b==0)
		{
			printf("LCM of %d and %d is %d",a,b,min);
			break;
		}
		min++;
	}
}
