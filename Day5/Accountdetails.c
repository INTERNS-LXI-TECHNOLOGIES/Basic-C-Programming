#include<stdio.h>
struct Customer{
    char name[15];
    int acc_no;
    int balance;
};
struct bank{
    char name[20];
    int ifsc;
    char branch[20];
    struct Customer cust[];
};
void enter(struct bank);
void balance_check(struct bank,int);
void display(struct bank);
void deposit(struct bank,int);
void withdraw(struct bank,int);
void search(struct bank,int);
void main(){
    struct bank b;
    printf("Bank Name : ");
    scanf("%s",&b.name);
    printf("IFSC code : ");
    scanf("%d",&b.ifsc);
    printf("Branch : ");
    scanf("%s",&b.branch);
    printf("Enter the Customer datails : \n");
    enter(b);
    int option,acc_num;
    int x=0;
    do{
        printf("\n1:Search \n2:Balance Check \n3:Display \n4:Deposit \n5:Withdraw ");
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("\nEnter the account number to be searched ");
            scanf("%d",&acc_num);
            search(b,acc_num); 
            break;
            case 2:
            printf("\nEnter the account number to find the balance : ");
            scanf("%d",&acc_num);
            balance_check(b,acc_num); 
            break;
            case 3:
            display(b);
            break;
            case 4:
            printf("\nEnter the account number : ");
            scanf("%d",&acc_num);
            deposit(b,acc_num);
            break;
            case 5:
            printf("\nEnter the account number : ");
            scanf("%d",&acc_num);
            withdraw(b,acc_num);
            break;            
        }
        printf("\nDo you want do furthur process (1.Yes 0.No) : ");
        scanf("%d",&x);
    }while(x==1);

}
void enter(struct bank b){
    for(int i=1; i<=3; i++){
        printf("Account Number : ");
        scanf("%d",&b.cust[i].acc_no);
        printf("Customer Name : ");
        scanf("%s",&b.cust[i].name);
        printf("Account Balance : ");
        scanf("%d",&b.cust[i].balance);
    }
}
void search(struct bank b,int acc_num){
    int index,temp=0;
    for(int i=1; i<=3; i++){
        if(b.cust[i].acc_no==acc_num){
            index=i;
            temp=1;
        }
    }
    if(temp==1){
        printf("\nName %s",b.cust[index].name);
        printf("\nAccount number %d",b.cust[index].acc_no);
        printf("\nBAlance : ",b.cust[index].balance);        
    }
    else{
        printf("\nInvalid account number ");
    }
}
void balance_check(struct bank b,int acc_num){
    int index,temp=0;
    for(int i=1; i<=3; i++){
        if(b.cust[i].acc_no==acc_num){
            index=i;
            temp=1;
        }
    }
    if(temp==1){
        printf("\nName : %s",b.cust[index].name);
        printf("\nThe aacount balance is : %d",b.cust[index].balance);
    }
    else{
        printf("\nThe account number is invalid ");        
    }
}
void display(struct bank b){
    printf("\n");
    for(int i=1; i<=3; i++){
        printf("Name : %s",b.cust[i].name);
        printf("\nAccount number : %d",b.cust[i].acc_no);
        printf("\nBalance : %d",b.cust[i].balance);
    }
}
void deposit(struct bank b,int acc_num){
    int index,temp=0;
    int depo;
    for(int i=1; i<=3; i++){
        if(b.cust[i].acc_no==acc_num){
            index=i;
            temp=1;
        }
    }
    if(temp==1){
        printf("\nAmount Depositted : ");
        scanf("%d",&depo);
        b.cust[index].balance = b.cust[index].balance+depo;
        printf("\nThe new account balance is : %d",b.cust[index].balance);
        
    }
    else{
        printf("\nInvalid Account number ");
    }
}
void withdraw(struct bank b,int acc_num){
    int index,temp=0;
    int withdraws;
    for(int i=1; i<=3; i++){
        if(b.cust[i].acc_no==acc_num){
            index=i;
            temp=1;
        }
    }
    if(temp==1){
        if(b.cust[index].balance > 500){
            printf("\nWithdrawal Amount : ");
            scanf("%d",&withdraws);
            b.cust[index].balance =  b.cust[index].balance-withdraws;
            printf("\nThe new account balance is : %d",b.cust[index].balance);
        }
        else{
            printf("\nAccount has minimum balance");
        }
    }
    else{
        printf("\nInvalid Account number ");
    }    
}