/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it
given number is prime or not
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,fact,count=0;
    printf("enter number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
     if(num%i==0)
      {  
          fact=i;
         count++;
         
      }
       
    }
    if(count==2)
        {
            printf("%d is a prime number",num);
            
        } 
        else
        
        {
            printf("%d is not a prime number",num);
        }
       
    return 0;
}