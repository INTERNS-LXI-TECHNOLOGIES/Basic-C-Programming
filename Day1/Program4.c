#include<stdio.h>
#include<conio.h>
void main () 
{
  
char name[10], design[10];
  
float BS, BP, PF, DA, NS;
  
float const HRA=500;
  
printf ("Enter the name of the Employee:");
  
scanf ("%s",&name);
  
printf ("Enter the designation of the Employee:");
  
scanf ("%s",&design);
  
printf ("Enter the Basic Pay:");
  
scanf ("%f",&BP);
 
DA=BP*75/100;
  
PF=BP*20/100;
  
if (BP<=10000)
{
    DA=(BP*75)/100;
    PF=(BP*20)/100;
  }
    else if(BP>10000)
    {
    DA=(BP*75)/100;
    PF=(BP*20)/100;
    }
    NS=(BP+DA+HRA)-PF;
    printf("Net Salary of enployee = %f",NS);
}
