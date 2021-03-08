/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include<math.h>
int main()
{
   int p,t;
   float si,ci,amnt,r;
   printf("principal : \n time: \n rate of interest: \n");
   scanf("%d %d %f",&p,&t,&r);
   si=p*t*(r/100);
   printf("simple interest : %f",si);
   amnt=p*pow(1+r/100,t);
   ci=amnt-p;
   printf("\ncompound interest : %f",ci);
    return 0;
}
