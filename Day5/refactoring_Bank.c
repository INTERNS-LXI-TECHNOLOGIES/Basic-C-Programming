#include <stdio.h>
#include <stdlib.h>


struct customers 
{
	char name[25];
	int acc;
	int bal;
};
void balance(struct customers [],int,int);
int search(struct customers [],int,int);
void display(struct customers [],int);
void deposite(struct customers [],int,int);
void withdraw(struct customers [],int,int);
void addRecord(struct customers c[],int);
void editRecord(struct customers c[],int);

void main()
{
	int i,index,x,lim,accno,amnt;
	int ch,cc=0;
	struct customers c[lim];
	printf("---------------BANK---------------\n");
	printf("___________________________________\n");
	printf("Enter limit:");
	scanf("%d",&lim);
	
	do{	
	printf("---------------BANK OPERATIONS--------------\n");
	
	printf("\n\n1.Add Record( Max :50) )\n2.search account \n3.withdraw\n4.Deposit\n5.Balance Check\n6.Display\n7.Edit Record\nEnter Ur choice:\n\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("\n");
			addRecord(c,lim);
			break;
	case 2: printf("Enter account number to search:\n");
			scanf("%d",&accno);
			index = search(c,accno,lim);
			if(index == -1)
			{
				printf("Record not found");
			}
			else
			{
				printf("%d \t %s\t %d \n",c[index].acc,c[index].name,c[index].bal); 		
			}
			break;
	case 3: printf("Enter account number:\n");
			scanf("%d",&accno);
			printf("Enter amount to withdraw:\n");
			scanf("%d",&amnt);
			withdraw(c,accno,amnt);
	        break;
	case 4:printf("Enter account number:\n");
			scanf("%d",&accno);
			printf("Enter amonut to Deposit:\n");
			scanf("%d",&amnt);
			deposite(c,accno,amnt);
	        break;
	case 5: printf("Enter account number:\n");
			scanf("%d",&x);
			balance(c,x,lim);
			break;
	case 6:display(c,lim);
	       break;
	case 7: printf("Enter account number to be edited:\n");
			scanf("%d",&accno);
			editRecord(c,accno);
			break;
	default :printf("Enter valid choice!!!");
	break;
	}	
	printf("\nDo you want to continue?press 1/press 0\n");
	scanf("%d",&cc);
}while(cc == 1);

}




void addRecord(struct customers c[],int lim)
{
	int i=0,j,temp,index=0;

		for(i=0;i<=lim;i++)
		{
		
		printf("Account holder %d Details:\n",i+1);
		printf("Account Holder Name:");
		scanf("%s",&c[i].name);
		printf("Account no:");
		scanf("%d",&c[i].acc);
		printf("Balance Amount:");
		scanf("%d",&c[i].bal);
		printf("\n");
		
	
		}
}
int search(struct customers c[],int x,int lim)
{
int i,index;
for(i=0;i<=lim;i++)
{
	if(c[i].acc == x)
	{
		return i;
		break;
	}
}	

return  -1;
}


void deposite(struct customers c[],int x,int amnt)
{
	int lim;
		int i = search(c,x,lim);
		if(i == -1)
		{
		printf("record not found");	
		}
		else
		{
			c[i].bal = c[i].bal + amnt;
			printf("New Balance :%d",c[i].bal);
		}
}

void withdraw(struct customers c[],int x,int amnt)
{
	int lim;
		int i = search(c,x,lim);
		if(i == -1)
		{
		printf("record not found\n");	
		}
		else
		{
			c[i].bal =  c[i].bal - amnt;
			printf("New Balance : %d",c[i].bal);
		}
}

void balance(struct customers c[],int x,int lim)
{
		int i = search(c,x,lim);
		if(i == -1)
		{
		printf("record not found\n");	
		}
		else
		{
			 printf("%d \t %s\t %d \n",c[i].acc,c[i].name,c[i].bal);
		}
}

void display(struct customers c[],int lim)
{
		int i ;
		printf("\n\nA/c No\tName\tBalance\n");	
		for(i=0;i<=lim;i++)	
		{
		printf("%d \t %s\t %d \n",c[i].acc,c[i].name,c[i].bal); 
		}
}

void editRecord(struct customers c[],int x)
{
	
		int index ,lim;
		index = search(c,x,lim);
		if(index == -1)
		{
		printf("record not found\n");	
		}
		else
		{
		printf("Account Holder Name:");
		scanf("%s",&c[index].name);
		printf("Account no:");
		scanf("%d",&c[index].acc);
		printf("Amount Balance:");
		scanf("%d",&c[index].bal);
		printf("\n");
		}

}