#include <stdio.h>
struct bank
{
    char name[10];int ifsc;char branch[10];
    struct customer 
    {
        char name[10];int acc_no; int balance;
    }c[];
}b;
void search( int, struct bank );
void acc_balance( int, struct bank );
void deposits( int, int, struct bank );
void withdrawals( int, int, struct bank );
void display( struct bank );
void add( struct bank );
int main()
{
    int i, j, choice, n, deposit, withdrawal;
    struct customer c[10];

    printf("\n\n Enter Bank Name : ");
    scanf("%s", &b.name);
    printf("\n Enter IFSC code : BANK");
    scanf("%d", &b.ifsc);
    printf("\n Enter Branch    : ");
    scanf("%s", &b.branch);


    printf("\n\n Enter the details of 5 Customers\n ");
    add( b );
    int z = 0;
    do
    {
        printf("\n Choose an Option.\n");
        printf("\n\t 1. Search for a Customer.");
        printf("\n\t 2. Check Balance.");
        printf("\n\t 3. Display all Details.");
        printf("\n\t 4. Deposits.");
        printf("\n\t 5. Withdrawals. ");
        printf("\n\n Enter the choice : ");
        scanf("%d", & choice);
        switch ( choice )
        {
            case 1 :
                printf("\n Enter Account No. : ");
                scanf("%d", &n);
                search ( n, b );
                break;
            case 2 :
                printf("\n Enter Account No. : ");
                scanf("%d", &n);
                acc_balance ( n, b );
                break;
            case 3 :
                display ( b );
                break;
            case 4 :
                printf("\n Enter Account No.  : ");
                scanf("%d", &n);
                printf("\n Deposit Amount     : ");
                scanf("%d", &deposit);
                deposits ( n, deposit, b );
                break;
            case 5 :
                printf("\n Enter Account No.  : ");
                scanf("%d", &n);
                printf("\n Withdrawal Amount  : ");
                scanf("%d", &withdrawal);
                withdrawals ( n, withdrawal, b );
                break;
            default:
                break;
        }
        printf("\n Do you want to continue ?\n\n\t1. Yes.\n\t2. No. \n ");
        scanf("%d", &z);
    }while ( z == 1 );
}
void add ( struct bank b ) 
{
    for( int i = 1; i <= 5; i++ )
    {
        printf("\n Customer Name    : ");
        scanf("%s",&b.c[i].name);
        printf(" Account number   : ");
        scanf("%d",&b.c[i].acc_no);
        printf(" Current Balance  : ");
        scanf("%d",&b.c[i].balance);
        printf(" \n ");
    }
}
void search ( int n, struct bank b )
{
    int i, x, y=0;
    for( i = 1; i <= 5; i++ )
    {
        if( b.c[i].acc_no == n )
        {
            x = i;
            y = 1;
        }
    }
    if( y != 0 )
    {
        printf("\n Account No.      : %d", b.c[x].acc_no );
        printf("\n Customer Name    : %s", b.c[x].name);
        printf("\n Current Balance  : %d", b.c[x].balance);
    }
    else
    {
        printf("\n Account not found...! \n\n");
    }
}
void acc_balance (int n, struct bank b )
{
       
    int i, x ;
    for( i = 1; i <= 5; i++ )
    {
        if ( b.c[i].acc_no == n )
        {
            x = i;
    
        }
    }
    if( x == 0)
    {
        printf("\n Account not Found...!\n\n ");
    }
    else 
    {
        printf("\n\n Customer Name    : %s" ,b.c[x].name);
        printf("\n Current balance  : %d", b.c[x].balance);
        printf(" \n\n ");
    }
}

void deposits ( int n, int deposit, struct bank b)
{
    int  i, x = 0;
    for( i = 1; i <= 5; i++ )
    {
        if ( b.c[i].acc_no == n )
        {
            x = i;
        }
    }
    if ( x == 0)
    {
        printf("\n Account not found...!\n\n ");
    }
    else
    {
        b.c[x].balance += deposit ;
        printf("\n Current Account Balance : %d\n\n", b.c[x].balance);
    }
}
void withdrawals ( int n, int withdraws, struct bank b )
{
    int i, x = 0;
    for( i = 1; i <= 5; i++ )
    {
        if ( b.c[i].acc_no == n )
        {
            x = i;
        }
    }
    if( x == 0 )
    {
        printf("\nAccount not found...!\n\n ");
    }
    else
    {
        b.c[x].balance -= withdraws;
        printf("\n Current Account Balance : %d\n\n", b.c[x].balance);
    }    
}
void display ( struct bank b )
{
        printf("\n\n    Bank       :       %s",b.name);
        printf("\n    IFSC       :       BANK%d",b.ifsc);
        printf("\n    Branch     :       %s",b.branch);
    int i;
    for( i = 1; i <= 5; i++ )
    {
        printf("\n\n Account No.      : %d",b.c[i].acc_no);
        printf("\n Customer Name    : %s",b.c[i].name);
        printf("\n Current Balance  : %d",b.c[i].balance);
        printf(" \n");
    }
}