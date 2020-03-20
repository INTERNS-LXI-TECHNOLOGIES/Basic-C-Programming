#include<stdio.h>
#include<math.h>
main()
{
	int a,num,rem,rev,n,p;
	char ch;
	do
	{
		n=0;
		printf("Enter the number : ");
		scanf("%d",&num);
		a=num;
		while(a!=0)
		{
			a=a/10;
			n++;
			
		}
		printf("%d ",n);
		a=num;
		rem=0;
		p=0;
		do
		{
			rem=a%10;
			p=pow(rem,n)+p;
			a=a/10;
		}while(a!=0);
		if(p==num)
		{
				printf("%d is  amstrong number\n",num);
		}
		else
		{
			printf("%d is not a amstrong number\n",num);
		}
		printf("Do you need to continue (y/n)");
		scanf("%c");
		scanf("%c",&ch);
	}while(ch=='y');
}
