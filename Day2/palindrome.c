#include<stdio.h>
main()
{
	int a,num,rem,rev;
	char ch;
	a=num;
	do
	{
		printf("Enter the number : ");
		scanf("%d",&num);
		a=num;
		rem=0;
		rev=0;
		do
		{
			
			rem=num%10;
			rev=(rev*10)+rem;
			num=num/10;
			
		}while(num!=0);
		if(a==rev)
		{
			printf("%d is a palindrome\n",a);
		}
		else
		{
			printf("%d is not a palindrome\n",a);
		}
		printf("Do you need to continue (y/n)");
		scanf("%c");
		scanf("%c",&ch);
	}while(ch=='y');	
}
