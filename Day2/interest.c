#include<stdio.h>
 
#include<math.h>
 
int main()
 
{
 
        int p,t;
        float r,si,amount,ci;
        
        p=1000000;
        t=10;
 
       
        r=12.5;
 
        si=p*t*r/100;
 
        printf("\nSimple interest = %.3f",si);
 
        amount=p*pow((1 +r/100),t);
 
        ci=amount-p;
 
        printf("\nCompound interest = %.3f",ci);
 
}
