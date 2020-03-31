#include<stdio.h>
#include<conio.h>
#include<string.h>
struct customer
{
	char name[10];
	float balance;
	float deposit;
	float withdraw;
	int account;
	
}s[5];

void balance(int accno,struct customer a[])
{
	int j;
	for(j=0;j<5;j++)
	{
		if(a[j].account==accno)
		{
			printf("%f",a[j].balance);
		}
	}
}




void search(int accno,struct customer a[])
{
	int j;
	for(j=0;j<5;j++)
	{
		if(a[j].account==accno)
		{
			printf("%s details has been entered \n ",a[j].name);
		}
	}
}

void deposit(int accno,struct customer a[])
{
	int j;
		for(j=0;j<5;j++)
	{
		if(a[j].account==accno)
		{
			printf("%f",a[j].deposit);
		}
}
}


void withdraw(int accno,struct customer a[])
{
	int j;
	for(j=0;j<5;j++)
	{
		if(a[j].account==accno)
		{
			printf("%f",a[j].withdraw);
		}
	}
}





void display(struct customer a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n***** CUSTOMER DETAILS-%d*****\n",i+1);
		printf("Name => ");
		printf(" %s",s[i].account);
		printf("\n Withdraw=> ");
		printf("%f",s[i].withdraw);
		printf("\nDeposit=> ");
		printf("%d",s[i].deposit);
	}
}




void main()
{
	int i,ch,accno;
	
	
	printf("Enter The Customer Details \n ");
	for(i=0;i<5;i++)
	{
		printf("\n***** CUSTOMER-%d*****\n",i+1);
		printf("Name => ");
		scanf("%s",&s[i].name);
		printf("ACCOUNT Number => ");
		scanf("%d",&s[i].account);
		printf("DEPOSIT => ");
		scanf("%f",&s[i].deposit);
		printf(" WITHDRAW=> ");
		scanf("%f",&s[i].withdraw);
		printf("BALANCE =>");
		scanf("%f",&s[i].balance);
	}
	printf("Select the operation you need to perform \n [1] Search \n [2] Withdraw\n [3] Balance \n [4] Deposit \n [5] Quit \n") ;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter The ACCOUNT NUMBER to be searched \n");
				scanf("%d",&accno);
				search(accno,s);
				break;
		case 2: printf("Enter the ACCOUNT NUMBER student \n");
				scanf("%d",&accno);
				withdraw(accno,s);
				break;
		case 3: printf("Enter the ACCOUNT NUMBER of student \n");
				scanf("%d",&accno);
				deposit(accno,s);
				break;
		case 4: display(s);
				break;
		case 5:
		default : break;
	
	}
}











