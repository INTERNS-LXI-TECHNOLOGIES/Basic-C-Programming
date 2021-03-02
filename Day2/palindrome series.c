/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

****************************************************************************

#include <stdio.h>

int main()
{
 int num,tem,revn,r;
 for(num=100;num<=200;num++)
 {
 tem=num;
 revn=0;
 while(tem)
     {
      r=tem%10;
     
      tem=tem/10;
       revn=(revn*10)+r;
     }
     if(num==revn)
      printf("\n %d",revn);
 
  }
    return 0;
 }