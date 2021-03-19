/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to read 5 customers account details and perform following functions Using
Structure Array & Function
      Search
        Balance Checking
         Display All
            Deposit
             Withdraw
*******************************************************************************/
#include <stdio.h>
struct customer
{
    int account_no;
    char name[50];
    int balance;
};
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);

int main()
{
    struct customer c[20];
    int n, choice, account_no, amount, k,i;
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    printf("enter account number: \n name: \n balance: \n ");
    scanf("%d %s %d",&c[i].account_no,c[i].name,&c[i].balance);
    }
    do
    {
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(c, n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                i= search(c, n, account_no);
                if (i==0)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("Account Number: %d\nName: %s\nBalance: %d\n",c[i].account_no, c[i].name,c[i].balance);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(c, n, account_no, amount);
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(c, n, account_no, amount);
        }
    }
    while (choice != 0);

    return 0;
}
void display(struct customer cu[80], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", cu[i].account_no, cu[i].name,cu[i].balance);
    } 
}

int search(struct customer cu[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (cu[i].account_no == number)
        {
            return i;
        } 
    }
    return  0;
}

void deposit(struct customer cu[], int s, int number, int amt)
{
    int i = search(cu, s, number);
    if (i == 0)
    {
        printf("Record not found");
    } 
    else
    {
        cu[i].balance = cu[i].balance+amt;
    }
}

void withdraw(struct customer cu[], int s, int number, int amt)
{
    int i = search(cu, s, number);
    if (i == 0)
    {
        printf("Record not found\n");
    } 
    else if (cu[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        cu[i].balance=cu[i].balance-amt;
    }
}