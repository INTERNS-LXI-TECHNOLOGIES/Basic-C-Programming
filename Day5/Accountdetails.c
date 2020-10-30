#include<stdio.h>
struct Account_details{
    char name[15];
    int acc_no;
    int balance;
};
void enter(struct Account_details[]);
void balance_check(struct Account_details[],int);
void display(struct Account_details[]);
void deposit(struct Account_details[],int,int);
void withdraw(struct Account_details[],int,int);
void search(struct Account_details[],int);
int main(){
    struct Account_details details[20];
    int option,acc_num;
    int i,deposits,withdrawal;
    printf("Enter the 5 account holder details : ");
    enter(details);
    printf("\nEnter the method you want to do : \n1.Search \n2.Balance Check \n3.Display \n4.Deposit \n5.Withdraw ");
    scanf("%d",&option);
    switch(option){
        case 1:
        printf("\nEnter the account number to be searched ");
        scanf("%d",&acc_num);
        search(details,acc_num); 
        break;
        case 2:
        printf("\nEnter the account number to find the balance : ");
        scanf("%d",&acc_num);
        balance_check(details,acc_num); 
        break;
        case 3:
        display(details);
        break;
        case 4:
        printf("\nEnter the account number : ");
        scanf("%d",&acc_num);
        printf("\nEnter the amount to be deoisitted : ");
        scanf("%d",&deposits);
        deposit(details,acc_num,deposits);
        break;
        case 5:
        printf("\nEnter the account number : ");
        scanf("%d",&acc_num);
        printf("\nEnter the amount to be withdrawed : ");
        scanf("%d",&withdrawal);
        withdraw(details,acc_num,withdrawal);
        break;

    }
}
void enter(struct Account_details details[20]){
    for(int i=1; i<=5; i++){
        printf("\nAccount holder name : ");
        scanf("%s",&details[i].name);
        printf("\nAccount number : ");
        scanf("%d",&details[i].acc_no);
        printf("\nEnter the account balance : ");
        scanf("%d",&details[i].balance);
    }
}
void search(struct Account_details details[20],int acc_num){
    int index,temp=0;
    for(int i=1; i<=5; i++){
        if(details[i].acc_no==acc_num){
            index=i;
            temp=1;
        }
    }
    if(temp==1){
        printf("\nName %s",details[index].name);
        printf("\nAccount number %d",details[index].acc_no);
        printf("\nBAlance : ",details[index].balance);        
    }
    else{
        printf("\nInvalid account number ");
    }
}
void balance_check(struct Account_details details[20],int acc_num){
    int index=0;
    for(int i=1; i<=5; i++){
        if(details[i].acc_no==acc_num){
            index=1;
        }
    }
    if(index==0){
        printf("\nThe account number is invalid ");

    }
    else{
        printf("\nName : %s",details[index].name);
        printf("\nThe aacount balance is : %d",details[index].balance);
    }
}
void display(struct Account_details details[20]){
    printf("\n");
    for(int i=1; i<=5; i++){
        printf("Name : %s",details[i].name);
        printf("\nAccount number : %d",details[i].acc_no);
        printf("\nBalance : %d",details[i].balance);
    }
}
void deposit(struct Account_details details[20],int acc_num,int depo){
    int index=0;
    for(int i=1; i<=5; i++){
        if(details[i].acc_no==acc_num){
            index=1;
        }
    }
    if(index==0){
        printf("\nInvalid Account number ");
    }
    else{
        details[index].balance = details[index].balance+depo;
        printf("\nThe new account balance is : %d",details[index].balance);
    }
}
void withdraw(struct Account_details details[20],int acc_num,int withdraws){
    int index=0;
    for(int i=1; i<=5; i++){
        if(details[i].acc_no==acc_num){
            index=1;
        }
    }
    if(index==0){
        printf("\nInvalid Account number ");
    }
    else{
        details[index].balance =  details[index].balance-withdraws;
        printf("\nThe new account balance is : %d",details[index].balance);
    }    
}