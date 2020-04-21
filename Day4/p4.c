#include<stdio.h>

struct customer
{
	char name [10];
	long Accountnumber;
	int balance, deposite, withdraw, age, Pin,i;		
};
	customer[5];

	void Input() ;
	void Search() ;
	void Deposit() ;
	void Balance() ;
	void Withdraw() ; 
	void Display() ;
	int PinChk(long a);
	

int main()
{
	int op,flag=0;
    long acc ;
    char c ;
	do
        {

        printf("\n Choose Action : \n \n (1) Search. \n (2) Balance Check. \n (3) Display All \n (4) Deposit. \n (5) Withdraw \n \n : ") ;
        scanf("%d",&op);
	
	switch(op)
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
    }
	while(c=='y' || c=='Y') ;
	return ;
  }
	
	void input()
	{
		int i
		for(i=0;i<=5;i++);
			{
			
				printf("\n Input Details of Account Holder %d : \n \n Name : ",i+1) ;
				gets(customer[i].name) ;
				printf("\n Age : ") ;
				scanf("%d",&customer[i].age) ;
				printf("\n Account Number : ") ;
				scanf("%ld",&customer[i].accountnumber) ;
				printf("\n Initial Deposit : ") ;
				scanf("%ld",&customer[i].balance) ;
				
				scanf("%c");
			}
}			
int PinChk(long a)
{
    int p ;
    for(int i=0;i<5;i++)
        {
            if(a == customer[i].Accountnumber)
            {
                printf("\n Input 4-Digit PIN : ") ;
                scanf("%d",&p) ;

                if(p != customer[i].pin)
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
        if(a==customer[i].Account Number)
        {
            flag=PinChk(a) ;
            if(flag==1)
                printf("\n \n Account Number : %ld \n Name : %s \n Age : %d \n Balance : %ld ",customer[i].Accountnumber,customer[i].name,b[i].age,customer[i].balancence) ;
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
        if(a==customer[i].Accountnumber)
        {
            flag=PinChk(a) ;
            if(flag==1)
                printf(" \n Balance : %d ",customer[i].balance) ;
            return ;
        }
    }
        printf("\n Invalid Account Number.") ;
}

void Display()
{
    for(int i=0;i<5;i++)

       printf("\n \n Details of Account Holder %d : \n Account Number : %ld \n Name : %s \n Age : %d \n Balance : %ld \n ---------------- ",i+1,customer[i].Accountnumber,customer[i].name,customer[i].age,customer[i].balance) ;

	return ;
}

void Deposit()
{
    long a ;
    int dep,flag=0 ;

     printf("\n Input Account No : ") ;
     scanf("%ld",&a) ;

     for(int i=0;i<5;i++)
    {
        if(a==customer[i].Accountnumber)
        {
            flag=PinChk(a) ;
            if(flag==1)
               {
                printf(" \n Current Balance : %d ",Customer[i].bal) ;

                  printf("\n Input Amount to Deposit :") ;
                  scanf("%d",&dep) ;
                 customer[i].balance+=dep ;

                printf(" \n Updated Balance : %d ",customer[i].balance) ;
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
        if(a==customer[i].Accountnumber)
        {
            flag=PinChk(a) ;
            if(flag==1)
               {
                printf(" \n Current Balance : %d ",customer[i].balance) ;

                  printf("\n Input Amount to Deposit :") ;
                  scanf("%d",&wit) ;
                  customer[i].balance -= wit ;

                printf(" \n Updated Balance : %d ",customer[i].balance) ;
               }

            return ;
        }
    }
        printf("\n Invalid Account Number.") ;


}
	