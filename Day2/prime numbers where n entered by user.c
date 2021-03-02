/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it
To generate first n prime numbers where n is entered interactively by the user.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,fact,limit,count;
    
    for(int j=100;j<=200;j++)
    {
        num=j;
        count=0;
    for(int i=1;i<=num;i++)
    {
     if(num%i==0)
      {  
        count++;
         
      }
       
    }
    if(count==2)
        {
            printf("%d ",num);
            
        }
    }
        
    return 0;
}