/*
Program to read  5 customers account details and perform following functions Using Structure Array & Function
a.	Search
b.	Balance Checking
c.	Display All
d.	Deposit
e.	 Withdraw
*/

#include <stdio.h>

struct Bank
{
    char name[25] ;
    long accNo,bal;
    int age,no,pin ;
} b[5] ;

void Input() ; void Search() ; void Deposit() ;

void Balance() ; void Withdraw() ; void Display() ;

int PinChk(long a) ;


int main()
{
    int op,flag=0;
    long acc ;
    char c ;

    Input() ;


      do
        {

        printf("\n Choose Action : \n \n (1) Search. \n (2) Balance Check. \n (3) Display All \n (4) Deposit. \n (5) Withdraw \n \n : ") ;
        scanf("%d",&op);

       switch (op)
       {
       case 1 :
        Search() ;
        break ;

       case 2 :
         Balance() ;
         break ;

       case 3 :
        Display() ;
        break ;

       case 4:
        Deposit() ;
        break ;
       case 5:
        Withdraw() ;
       default:
        printf("\n Invalid Choice Opted .") ;

       }

       printf("\n Go Back to Main Menu? (Y/N) :") ;
       scanf("%s",&c) ;
    }while(c=='y' || c=='Y') ;

    }



void Input()
{
     for(int i=0;i<5;i++)

   {
       printf("\n Input Details of Account Holder %d : \n \n Name : ",i+1) ;
       gets(b[i].name) ;
       printf("\n Age : ") ;
       scanf("%d",&b[i].age) ;
       printf("\n Account Number : ") ;
       scanf("%ld",&b[i].accNo) ;
       printf("\n Set 4-Digit PIN for Account (xxxx): ") ;
       scanf("%d",&b[i].pin) ;

       printf("\n Initial Deposit : ") ;
       scanf("%ld",&b[i].bal) ;

       scanf("%c");

   }
}

int PinChk(long a)
{
    int p ;
    for(int i=0 ;i<5;i++)
        {
            if(a == b[i].accNo)
            {
                printf("\n Input 4-Digit PIN : ") ;
                scanf("%d",&p) ;

                if(p != b[i].pin)
                printf("\n Invalid Pin") ;
                else
                    return 1 ;
            }
        }
        printf("\n Account Number is Invalid") ;

}

void Search()
{
    long a ;
    int flag=0;

    printf("\n Input Account Number to be Searched : ") ;
    scanf("%ld",&a) ;

    for(int i=0;i<5;i++)
    {
        if(a==b[i].accNo)
        {
            flag=PinChk(a) ;
            if(flag==1)
                printf("\n \n Account Number : %ld \n Name : %s \n Age : %d \n Balance : %ld ",b[i].accNo,b[i].name,b[i].age,b[i].bal) ;
            return ;
        }
    }
        printf("\n Invalid Account Number.") ;
}

void Balance()
{
    long a ;
    int flag=0 ;

     printf("\n Input Account No : ") ;
     scanf("%ld",&a) ;

     for(int i=0;i<5;i++)
    {
        if(a==b[i].accNo)
        {
            flag=PinChk(a) ;
            if(flag==1)
                printf(" \n Balance : %d ",b[i].bal) ;
            return ;
        }
    }
        printf("\n Invalid Account Number.") ;
}

void Display()
{
    for(int i=0;i<5;i++)

       printf("\n \n Details of Account Holder %d : \n Account Number : %ld \n Name : %s \n Age : %d \n Balance : %ld \n ---------------- ",i+1,b[i].accNo,b[i].name,b[i].age,b[i].bal) ;
}

void Deposit()
{
    long a ;
    int dep,flag=0 ;

     printf("\n Input Account No : ") ;
     scanf("%ld",&a) ;

     for(int i=0;i<5;i++)
    {
        if(a==b[i].accNo)
        {
            flag=PinChk(a) ;
            if(flag==1)
               {
                printf(" \n Current Balance : %d ",b[i].bal) ;

                  printf("\n Input Amount to Deposit :") ;
                  scanf("%d",&dep) ;
                  b[i].bal+=dep ;

                printf(" \n Updated Balance : %d ",b[i].bal) ;
               }

            return ;
        }
    }
        printf("\n Invalid Account Number.") ;

}

void Withdraw()
{
    long a ;
    int wit,flag=0 ;

     printf("\n Input Account No : ") ;
     scanf("%ld",&a) ;

     for(int i=0;i<5;i++)
    {
        if(a==b[i].accNo)
        {
            flag=PinChk(a) ;
            if(flag==1)
               {
                printf(" \n Current Balance : %d ",b[i].bal) ;

                  printf("\n Input Amount to Deposit :") ;
                  scanf("%d",&wit) ;
                  b[i].bal -= wit ;

                printf(" \n Updated Balance : %d ",b[i].bal) ;
               }

            return ;
        }
    }
        printf("\n Invalid Account Number.") ;

}

