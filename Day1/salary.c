#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char* array[2];
    int BASIC_PAY,HRA;
    double PF, DA, NET_SAL;
    HRA=500;

    printf("\n\n Enter the Name : ");
    scanf("%s",&array[0]);
    printf("\n Enter Designation : ");
    scanf("%s",&array[1]);
 
    printf("\n Enter Basic Payment : ");
    scanf("%d",&BASIC_PAY);


    if (BASIC_PAY >= 10000)
    {
        DA = 0.75*BASIC_PAY;
        PF = 0.20*BASIC_PAY;   
        NET_SAL = BASIC_PAY + DA - PF + HRA;
    }
    else
    {
        DA = 0.60*BASIC_PAY;
        PF = 0.15*BASIC_PAY; 
        NET_SAL = BASIC_PAY + DA - PF + HRA;
    } 
    printf("\n\n Net Salary = %f",NET_SAL);   
    return 0;
}