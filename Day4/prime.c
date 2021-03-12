/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.Program to check whether the given number is Prime or not ? (Argument & return type)
*******************************************************************************/
#include<stdio.h>
int prime(int x);
int main()
{
    int n,a,count;
    printf("enter a number : \n");
    scanf("%d",&n);
    a=prime(n);
    if(a==2)
    {
        printf(" %d is prime number \n",n);
    }
    else
    {
        printf("%d is not prime number \n",n);
        
    }
    return 0;
}
int prime(int x)
{ 
    int i,fact,count=0;
     for(i=1;i<=x;i++)
    {
     if(x%i==0)
      {  
          fact=i;
         count++;
         
      }
    }
     return count;
}
