#include<stdio.h>
#include<string.h>

struct coust
{
	char name[10];
	int bal,account_num;
	
}a[5];

void search(int acc, struct coust c[])
{
	int j;
	for(j=0;j<5;j++)
	{
		if(c[j].account_num==acc)
		{
			printf("%s details are present \n ",c[j].name);
		}
	}
}

void disp(struct coust c[])
{
	int j;
	for(j=0;j<5;j++)
	{
		printf("           Coustomer %d         \n", j+1);
		printf("Name => %s\n",c[j].name);
		printf("Account Number => %d\n", c[j].account_num);
		printf("Account Balance => %d\n",c[j].bal);
		
	}
}

void bal(int acc, struct coust c[])
{
	int j;
	for(j=0;j<5;j++)
	{
		if(c[j].account_num==acc)
		{
			printf("%s's account balance = %d \n ",c[j].name,c[j].bal);
		}
	}	
}


void depo(struct coust c[])
{
	int amnt,acc,j,f;
	printf("\nEnter the Account Number => ");
	scanf("%d",&acc);
	for(j=0;j<5;j++)
	{
		if(c[j].account_num==acc)
		{
			printf("Hello %s please enter the amount to be depositted => ",c[j].name);
			scanf("%d",&amnt);
			c[j].bal+=amnt;
			printf("Current Balance = %d\n",c[j].bal);
			f=1;
			break;
		}
		else
		{
			f=0;
		}
	}
	if(f==0)
	{
		printf("Sorry Account Not Found \n");
		
	}
	
}

void withdraw(struct coust c[])
{
	
	int amnt,acc,j,f=1;
	printf("\nEnter the Account Number => ");
	scanf("%d",&acc);
	for(j=0;j<5;j++)
	{
		if(c[j].account_num==acc)
		{
			printf("Hello %s please enter the amount to be withdrawed => ",c[j].name);
			scanf("%d",&amnt);
			c[j].bal-=amnt;
			printf("Current Balance = %d",c[j].bal);
			f=1;
			break;
		}
		else
		{
			f=0;
		}
	}
	if(f==0)
	{
		printf("Sorry Account Not Found \n");
		
	}
	
}


main()
{
	int i,ch,acc;
	int c;
	char cq;
	printf("Enter The Student Details \n ");
	for(i=0;i<5;i++)
	{
		a[i].bal=1000;
		printf("\n***** Coustomer-%d*****\n",i+1);
		printf("Name => ");
		scanf(" %s",&a[i].name);
		printf("Account number => ");
		scanf("%d",&a[i].account_num);
		printf("balance => ");
		printf("%d",a[i].bal);
	
	}
	do
	{
		
		printf("\nSelect the operation you need to perform \n [1] Search \n [2] Balance Checking \n [3] Display All \n [4] Deposit \n [5] Withdraw \n") ;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the account number \n");
					scanf("%d",&acc);
					search(acc,a);
					break;
			case 2: printf("Enter the Account Number \n");
					scanf("%d",&acc);
					bal(acc,a);
					break;
			case 3: disp(a);
					break;
			case 4: depo(a);
					break;
			case 5: withdraw(a);
					break;
			default: break;

		}
		
	printf("Continue (1/0)");
	scanf("%d",&c);	
	//getch(cq);
	}while( c == 1);
}
