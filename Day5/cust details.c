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
    int accountno;
    char name[20];
    int balance;
};
void display(struct customer c[5]);
int search(struct customer c[5]);
void deposit(struct customer c[5]);
void withdraw(struct customer c[5]);

int main()
{
    struct customer c[5];
    int n, choice, accountno, amnt, index,i;
    for(i=0;i<5;i++)
    {
    printf("enter account number: \n name: \n balance: \n ");
    scanf("%d %s %d",&c[i].accountno,c[i].name,&c[i].balance);
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
                display(c);
                break;
            case 2:
            printf("Enter account number to search : ");
            scanf("%d", &c[i].accountno);
            index= search(c);
            if(index==-1)
               {
                   printf("record not found");
               } 
               else
               {
                   printf("a/c number:%d\n name:%s\n balance:%d\n",c[index].accountno,c[index].name,c[index].balance);
               }
                break;
            case 3:
                deposit(c);
                break;
            case 4:
                withdraw(c);
        }
    }
    while (choice != 0);

    return 0;
}
void display(struct customer c[5])
{
    int i;
    printf("A/c No\tName\tBalance\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d\n", c[i].accountno, c[i].name,c[i].balance);
    } 
}

int search(struct customer c[5])
{
    int i,number;
    for (i = 0; i < 5; i++)
    {
        if (c[i].accountno == number)
        {
        return i;
        }
    }
     return -1;  
 
}

void deposit(struct customer c[5])
{
    int i,amnt;
    printf("Enter account number : ");
    scanf("%d", &c[i].accountno);
    printf("Enter amount to deposit : ");
    scanf("%d", &amnt);
    c[i].balance = c[i].balance+amnt;
}

void withdraw(struct customer c[5])
{
    int i,amnt;
    printf("Enter account number : ");
    scanf("%d", &c[i].accountno);
    printf("Enter amount to withdraw : ");
    scanf("%d", &amnt);
    if (c[i].balance < amnt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        c[i].balance=c[i].balance-amnt;
    }
}