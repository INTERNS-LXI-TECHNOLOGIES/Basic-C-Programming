#include<conio.h>
#include<stdio.h>
struct customer
{
int accountnumber;
char name[20];
int savings;
}s[5];
int i;
void search(struct customer s[5],int)
{
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n savings: %d",s[i].savings);
printf("\n ",search);
}
void checking(struct customer s[5],int)
{
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n savings: %d",s[i].savings);
printf("\n remaining balance is: %d",s[i].savings);
}
void display(struct customer s[5])
{
for(i=0;i<5;i++)
{
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n savings: %d",s[i].savings);
}
}
int deposit(struct customer s[5],int,int)
{
int n=0;
int savings;
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n savings: %d",s[i].savings);
savings=savings+n;
printf("\n current savings after deposit: %d",savings);
return savings;
}
int withdraw(struct customer s[5],int,int)
{
int m=0;
int savings;
printf("\n account number: %d",s[i].accountnumber);
printf("\n name: %s",s[i].name);
printf("\n savings: %d",s[i].savings);
savings=savings-m;
printf("\n current savings after withdrawal: %d",savings);
return savings;
}
void main()
{
int i,ch,accountnumber,n=0,m=0;
int c=0;
clrscr();
for(i=0;i<5;i++)
{
printf("\n enter the account number: ");
scanf("%d",&s[i].accountnumber);
printf("\n enter the name: ");
scanf("%s",&s[i].name);
printf("\n savings: ");
scanf("%d",&s[i].savings);
}
do
{
printf("\n 1.search \n 2.balance checking \n 3.display all \n 4.deposit \n 5.withdraw ");
printf("\n enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n enter the account number to be search: ");
       scanf("%d",&s[i].accountnumber);
       search(s,accountnumber);
       break;
case 2:printf("\n enter the account number to check the balance: ");
       scanf("%d",&s[i].accountnumber);
       checking(s,accountnumber);
       break;
case 3:printf("\n the records of customer ");
       display(s);
       break;
case 4:printf("\n enter the account number: ");
       scanf("%d",&s[i].accountnumber);
       printf("\n enter the amount to add: ");
       scanf("%d",&n);
       deposit(s,accountnumber,n);
       break;
case 5:printf("\n enter the account number: ");
       scanf("%d",&s[i].accountnumber);
       printf("\n enter the amount to withdraw: ");
       scanf("%d",&m);
       withdraw(s,accountnumber,m);
       break;
default:printf("\n invalid choice");
}
printf("\n do you want to continue (yes=press1 | no=press0): ");
scanf("%d",&c);
}
while(c==1);
getch();
}
