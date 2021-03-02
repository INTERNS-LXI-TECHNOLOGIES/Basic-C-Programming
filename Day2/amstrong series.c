/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int a,r,num,tem,sum;
 for(num=100;num<=200;num++)
 {
 tem=num;
 sum=0;
 while(tem)
   {
     a=tem%10;
     
     r=a*a*a;
     sum=sum+r;
     tem=tem/10; 
     
   }
     if(num==sum)
      printf("\n%d",sum);
     
}
 
    return 0;
}
