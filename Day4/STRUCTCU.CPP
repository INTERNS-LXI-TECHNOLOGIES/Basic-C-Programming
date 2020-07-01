#include<conio.h>
#include<stdio.h>
int i;
struct customer
{
int accountnumber;
char name[20];
int balance;
};
struct bank
{
char bankname[20];
char branch[20];
int ifsc;
struct customer s[5];
};
void search(struct customer s[5],int accountnumber)
{
for(i=0;i<5;i++)
{
if(accountnumber==s[i].accountnumber)
{
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n balance: %d",s[i].balance);
printf("\n ",search);
}
}
}
void checking(struct customer s[5],int accountnumber)
{
int flag=0;
for(i=0;i<5;i++)
{
if(accountnumber==s[i].accountnumber)
{
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n balance: %d",s[i].balance);
printf("\n remaining balance is: %d",s[i].balance);
flag=1;
break;
}
}
if(flag==0)
{
printf("\n invalid account number ");
}
}
void display(struct customer s[5])
{
for(i=0;i<5;i++)
{
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n balance: %d",s[i].balance);
}
}
void deposit(struct customer s[5],int accountnumber,int n)
{
int flag=0;
for(i=0;i<5;i++)
{
if(accountnumber==s[i].accountnumber)
{
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n balance: %d",s[i].balance);
s[i].balance=s[i].balance+n;
printf("\n current balance after deposit: %d",s[i].balance);
flag=1;
break;
}
}
if(flag==0)
{
printf("\n invalid account number ");
}
}
void withdraw(struct customer s[5],int accountnumber,int m)
{
int flag=0;
for(i=0;i<5;i++)
{
if(accountnumber==s[i].accountnumber)
{
flag=1;
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n balance: %d",s[i].balance);
if(s[i].balance>=m)
{
s[i].balance=s[i].balance-m;
printf("\n the current balance is: %d",s[i].balance);
}
else
{
printf("\n your current balance is low ");
}
}
}
if(flag==0)
{
printf("\n invalid account number");
}
}
void main()
{
int i,ch,accountnumber,n=0,m=0;
int c=0;
clrscr();
struct customer s;
struct bank b={"SBI","palakkad",510};
printf("\n %s",b.bankname);
printf("\n customer entry form ");
for(i=0;i<5;i++)
{
printf("\n enter the account number: ");
scanf("%d",&b.s[i].accountnumber);
printf("\n enter the name: ");
scanf("%s",&b.s[i].name);
printf("\n enter the balance: ");
scanf("%d",&b.s[i].balance);
}
do
{
printf("\n 1.search \n 2.balance checking \n 3.display all \n 4.deposit \n 5.withdraw ");
printf("\n enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n enter the account number to be search: ");
       scanf("%d",&accountnumber);
       search(b.s,accountnumber);
       break;
case 2:printf("\n enter the account number to check the balance: ");
       scanf("%d",&accountnumber);
       checking(b.s,accountnumber);
       break;
case 3:printf("\n the records of customer ");
       display(b.s);
       break;
case 4:printf("\n enter the account number: ");
       scanf("%d",&accountnumber);
       printf("\n enter the amount to add: ");
       scanf("%d",&n);
       deposit(b.s,accountnumber,n);
       break;
case 5:printf("\n enter the account number: ");
       scanf("%d",&accountnumber);
       printf("\n enter the amount to withdraw: ");
       scanf("%d",&m);
       withdraw(b.s,accountnumber,m);
       break;
default:printf("\n invalid choice");
}
printf("\n do you want to continue (yes=press1 | no=press0): ");
scanf("%d",&c);
}
while(c==1);
getch();
}



