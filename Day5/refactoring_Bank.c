#include <stdio.h>

struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void addRecord(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
/*void deposit(struct customer[], int, int,int);
void withdraw(struct customer[], int,int,int);*/
void editRecord(struct customer[],int,int);
void balance(struct customer [],int,int);
int main()
{
    struct customer data[20];
    int n, ch,cc, account_no, amount, index;

    printf("---------------BANK---------------\n");
	printf("___________________________________\n");
    printf("Number of customer records you want to enter? :\n ");
    scanf("%d", &n);
    do
    {

        printf("---------------BANK OPERATIONS--------------\n");
	
        printf("\n\n1.Add Record( Max :50) )\n"
				"2.search account \n"
				"3.withdraw\n"
				"4.Deposit\n"
				"5.Balance Check\n"
				"6.Display\n"
				"7.Edit Record\n"
				"Enter Ur choice:\n\n");
				scanf("%d",&ch);
        switch (ch)
        {
            case 1:addRecord(data, n);
                    break;
            
            case 2:printf("Enter account number to search : ");
                   scanf("%d", &account_no);
                   index = search(data, n, account_no);
                   if (index ==  - 1)
                   {
                     printf("Record not found ??? ");
                   }
                  else
                  {
                  	printf("\n\nA/c No\tName\tBalance\n");
                    printf("%d\t%s\t%d\n",data[index].account_no, data[index].name,
                        data[index].balance);
                  }
                  break;
            case 3:
            	printf("Withdraw Amount\n");
            	printf("____________________\n");
            	printf("Enter account number : ");
                scanf("%d", &account_no);
				int i = search(data , n , account_no);
    			if (i ==  - 1)
    			{
        		printf("Record not found");
        		break;
    			}		 
    			else
    			{
    			printf("Enter amount to withdraw : ");
                scanf("%d", &amount);	
        		data[i].balance -= amount;
        		printf("New Balnce=\t%d\n",data[i].balance);
    			}	
                
        
                break;
                
            case 4:
            	printf("Deposite Amounnt\n");
            	printf("____________________\n");
            	printf("Enter account number : ");
                scanf("%d", &account_no);
				i = search(data,n, account_no);
    			if (i ==  - 1)
    			{
        		printf("Record not found");
        		break;
    			}		 
    			else
    			{
    			printf("Enter amount to Deposite : ");
                scanf("%d", &amount);	
        		data[i].balance += amount;
        		printf("New Balnce=\t%d\n",data[i].balance);
    			}
				break;	
                
            case 5: printf("Enter account number : ");
                	scanf("%d", &account_no);
					balance(data,n,account_no);
					break;
					   
            case 6:display(data,n);
					break;   
					
            case 7:printf("Enter account number to be edited : ");
                	scanf("%d", &account_no);
					editRecord(data,n,account_no);
					break;
            default:printf("Enter valid choice(1-7)!!");
			break;	
                
        }
        printf("\nDo you want to continue?press 1/press 0\n");
		scanf("%d",&cc);
}while(cc == 1);
}

void  addRecord(struct customer list[80], int s)
{
    int i,j,temp,flag=0;
    for (i = 0; i < s; i++)
    {
        printf("Account holder #%d Details:\n",i+1);
		printf("Account Holder Name:");
		scanf("%s",&list[i].name);
		there:
		printf("Account no:");
		scanf("%d",&temp);
		for(j=i;j>=0;j--)
		{
			
			if(temp == list[j].account_no)
			{
				flag=1;
				break;			
			}
			else
			{
				flag=0;
			}
		}
		list[i].account_no = temp;
		if(flag==1)
		{
			printf("Error\nAccount exists\nenter new account number\n");
			goto there;
		}
		else
		{
			printf("Balance:\n");
		    scanf("%d",&list[i].balance);

		}
	}
}

void display(struct customer list[50], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}

int search(struct customer list[50], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}
/*
void deposit(struct customer list[50], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        list[i].balance += amt;
        printf("New Balnce=\t%d",list[i].balance);
    }
}

void withdraw(struct customer list[50], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    } 
    else
    {
        list[i].balance -= amt;
        printf("New Balnce=\t%d",list[i].balance);
    }
}
*/
void balance(struct customer list[50],int x,int s)
{
		int i = search(list,x,s);
		if(i == -1)
		{
		printf("record not found\n");	
		}
		else
		{
			 printf("%d \t %s\t %d \n",list[i].account_no,list[i].name,list[i].balance);
		}
}

void editRecord(struct customer list[50],int x,int s)
{

		int i;
		i = search(list,x,s);
		if(i == -1)
		{
		printf("record not found\n");	
		}
		else

		{
		printf("Account Holder Name:");
		scanf("%s",&list[i].name);
		printf("Account no:");
		scanf("%d",&list[i].account_no);
		printf("Amount Balance:");
		scanf("%d",&list[i].balance);
		printf("\n");
		}		
}
