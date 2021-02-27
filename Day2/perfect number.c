/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.program to find factors of a number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,fact,sum=0,temp,s;
    printf("enter number: ");
    scanf("%d",&num);
    temp=num;
    for(int i=1;i<=num;i++)
    {
     if(num%i==0)
      {  
          fact=i;
          sum=sum+fact;
          s=sum-num;
      }
    }
          if(temp==s)
          {
          printf("%d is a perfect number",num);
          }
          else
          {
              printf("%d is not a perfect number",num);
          }
           
      

       
    return 0;
}