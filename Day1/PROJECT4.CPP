#include<conio.h>
#include<stdio.h>
void main()
{
char name[10],desig[10];
float BP,HRA,PF,DA,NS;
clrscr();
printf("\n Enter the name: ");
scanf("%s",&name);
printf("\n Designation: ");
scanf("%s",&desig);
printf("\n Basic pay: ");
scanf("%f",&BP);
if(BP<10000)
{
DA=BP*0.60;
PF=BP*0.15;
}
if(BP>10000)
{
DA=BP*0.75;
PF=BP*0.20;
}
HRA=500;
NS=(BP+DA+HRA)-PF;
printf("\n the net salary of the employee is: %f ",NS);
getch();
}