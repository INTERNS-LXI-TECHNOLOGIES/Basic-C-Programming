/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.program to find factorial of a number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,temp,sum=0,r;
 printf("\nNum: ");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
     r=n%10;
      
      int s=r*r*r;
      sum=sum+s;
      n=n/10;
 }
     if(temp==sum)
      printf("\n its amstrong",n);
      else

      printf("\ not a amstrong",n);

 
    return 0;
}