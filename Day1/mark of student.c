/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*..//******************************************************************************/

#include <stdio.h>

int main()
{
    char name;
    double m1,m2,m3,total;
    double percentage,result;
    printf("name:\n");
    scanf("%s",&name);
    printf("m1: \n");
    scanf("%lf", &m1);
    printf("m2: \n");
    scanf("%lf", &m2);
    printf("m3: \n");
    scanf("%lf", &m3);
    total=m1+m2+m3;
    printf("total: %lf",total);
    percentage=(total/300)*100;
    printf("\n percentage: %lf",percentage);
    if(percentage>=80)
    printf("\n first class with distiction");
    else if(percentage>=60)
    printf("\n first class ");
    else if(percentage>=40)
    printf("\n passed ");
    else
    printf("failed");
    return 0;
 }
