/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
amstrong series
*******************************************************************************/
#include <stdio.h>

int main()
{
  int i,n,cu,r,sum,temp;
 for(i=1;i<=400;i++)
 {
 n=i;
 sum=0;
 while(n>0)
 {
      r=n%10;
      if(i>99)
      {
      cu=r*r*r;
      }
      else if(i>9)
      {
          cu=r*r;
      }
      else
      {
          cu=r;
      }
      sum=sum+cu;
      n=n/10;
 }
     if(i==sum)
      printf("\n %d",i);
 }
    return 0;
}



