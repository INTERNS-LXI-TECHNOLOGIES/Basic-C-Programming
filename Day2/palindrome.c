/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
//Program to check whether the given number is palindrome or not//
*..//******************************************************************************/

#include <stdio.h>

int main()
{
 int num,tem,s=0,r;
 printf("\nNum: ",&num);
 scanf("%d",&num);
 tem=num;
 while(num>0)
 {
     r=num%10;
      
      s=(s*10)+r;
      num=num/10;
 }
     if(tem==s)
      printf("\n its palindrome",num);
      else

      printf("\ not a palindrome",num);

 
    return 0;
 }
