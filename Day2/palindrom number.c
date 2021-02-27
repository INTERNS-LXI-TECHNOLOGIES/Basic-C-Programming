/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.program to find factorial of a number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,temp,s=0,r;
 printf("\nNum: ");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
     r=n%10;
      
      s=(s*10)+r;
      n=n/10;
 }
     if(temp==s)
      printf("\n its palindrome",n);
      else

      printf("\ not a palindrome",n);

 
    return 0;
}