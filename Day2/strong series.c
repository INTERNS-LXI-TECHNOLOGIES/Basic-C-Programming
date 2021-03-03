/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
to chechk given number is string number or not?
*******************************************************************************/

#include <stdio.h>
int main()
{
    int num,i,fact,temp,r,sum;
    
    for(int j=100;j<=1000;j++)
    {
    num=j;
    sum=0;
    while(num>0)
      {
        r=num%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
         fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
      }
    
    if(j==sum)
    printf("\n %d",j);
    
  }
   
    return 0;
}