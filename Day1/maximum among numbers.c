/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <math.h>
#include<stdio.h>
int main()
{
    int n1=20,n2=5,n3=30,n4=26,max;
    max=((n1 > n2 && n1 > n3 && n1 > n4 ) ? n1 : (n2 > n3 && n2 > n4 ) ? n2 :( n3 > n4 ? n3 :n4 ));
   printf("maximum among %d %d %d %d is %d",n1,n2,n3,n4,max);
   return 0;
   
}