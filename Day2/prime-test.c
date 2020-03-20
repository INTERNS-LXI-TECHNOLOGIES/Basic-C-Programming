#include<stdio.h>
main()
{
	int j,i,n,prime=1,count;
	char ch;
	do
	{
		j=2;
		prime=1;
		
		printf("Enter the number you need to test : ");
		scanf("%d",&i);
		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
			
		}
		if(prime==1)
		{
			printf("%d is a prime number\n",i);
		}
		else
		{
			printf("%d is not a prime number\n",i);
		}
		printf("Do you need to continue (y/n)");
		scanf("%c");
		scanf("%c",&ch);
	}while(ch=='y');
}
