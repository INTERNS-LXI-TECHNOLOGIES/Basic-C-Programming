/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <math.h>
#include<stdio.h>
int main()
{
    
    float m1,m2,m3;
    float total,average;
    float percentage;
    printf("m1: \n");
    scanf("%f", &m1);
    printf("m2: \n");
    scanf("%f", &m2);
    printf("m3: \n");
    scanf("%f", &m3);
    total=m1+m2+m3;
    printf("total: %f",total);
    average=total/3.0;
    percentage=(average/300.0)*100;
    printf("\n percentage: %f",percentage);
    if(total<=300 && total>=200)
    printf("\n first class with distiction");
    else if(total<=199 && total>=100)
    printf("\n first class ");
    else if(total<=99 && total>=50)
    printf("\n second class ");
    else if(total<=49 && total>=10)
    printf("\n passed ");
    else
    printf("failed");
         
    
    
  
       
   
}