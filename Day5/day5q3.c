#include <stdio.h>
struct customer{
	char *Name[20];
	int balance;
	int accountNo;
	}c[];
	void search(struct customer c[]);
	void DisplayAll(struct customer c[]);
	void Deposit(struct customer c[]);
	void Withdraw(struct customer c[]);
	void BalanceChecking(struct customer c[]);
	int searchNo(struct customer c[]);
	int main(){
		int choice,i;
		for(i=0;i<6;i++)
		{
		printf("Enter Name\n");	
			scanf("%s\n",&c[i].Name);
			printf("Enter balance\n");
			scanf("%d",&c[i].balance);
			printf("Enter Account Number\n");
			scanf("%d",&c[i].accountNo);
			
		}
	do
	{
		
	
				
		printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 5 to check balance\n");
        
        scanf("%d", &choice);
		
        switch (choice)
         {
         case 1:	
		DisplayAll(c);
        break; 
         	case 2:	
		search(c);
         	break;
      	searchNo(c);
         	case 3:
		Deposit(c);
         	break;
         	case 4:
		Withdraw(c);
         	break;
         	case 5:
		BalanceChecking(c);
         	break;
         
	default:
         	printf("Wrong entry");
         }
         
         }while(choice!=0);
         }
         
         int searchNo(struct customer c[]){
	int AcctNo;
	printf("Enter account no\n");
	scanf("%d\n",&AcctNo);
int i;
	for(i=0;i<6;i++)
	{
	if(AcctNo==c[i].accountNo)
	return i;
	}
	return -1;
	}
	
		void DisplayAll(struct customer c[]){
			int i;
	for(i=0;i<2;i++)
	{
	printf("Name:%s\t balance:%d\n",c[i].Name,c[i].balance);	
	}
		
	}
	
void search(struct customer c[]){
	int i,flag=0,j;
	char *SearchName[20];
	printf("Enter search Name\n");
	scanf("%s\n",&SearchName);
	for(i=0;i<6;i++){
		for(j=0;j<=20;j++){
	if(c[i].Name[j]==SearchName[j]){
		flag=1;
				}
				break;
		}
				}	
			if(flag==1){
				printf("Customer Data Exist %s\n",SearchName);
				}
			else{
			printf("dont exist %s\n",SearchName);
				}
				
			}
			
			

void Deposit(struct customer c[]){
int i,depo;
	i=searchNo(c);
printf("Enter deposit\n");
	scanf("%d",&depo);
	if(i==-1)
	{
		printf("Account not found");
	}
else
{
		
	c[i].balance=c[i].balance+depo;
}
printf("%d is the New Balance\n",c[i].balance);
}
void Withdraw(struct customer c[]){
	int i,wthdra;
	i=searchNo(c);
	printf("Enter withdraw\n");
	scanf("%d",&wthdra);
	if(c[i].balance>wthdra){
	if(i==-1)
	{
		printf("Account not found");
	}
else
{
	c[i].balance=c[i].balance-wthdra;
}
printf("%d is the New Balance\n",c[i].balance);
}
else
printf("no enough balance");
}
void BalanceChecking(struct customer c[]){
int i,depo;
	i=searchNo(c);

	if(i==-1)
	{
		printf("Account not found");
	}
else
{
	printf("The Balance is %d\n",c[i].balance);
}
}
