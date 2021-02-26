/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
//Program to check whether the given number is amstrong or not ?//
*..//******************************************************************************/

#include <stdio.h>

int main()
{
 int a,r,num,tem,s=0;
 printf("\nNum: ",&num);
 scanf("%d",&num);
 tem=num;
 while(num>0)
 {
     a=num%10;
     
     r=a*a*a;
     s=s+r;
     num=num/10; 
 }
     if(tem==s)
      printf("\n its amstrong",num);
      else

      printf("\ not an amstrong",num);

 
    return 0;
 }
