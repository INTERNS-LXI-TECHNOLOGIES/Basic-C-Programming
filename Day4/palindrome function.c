/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int pali(int x);
int main()
{
    int n,a;
    printf("enter the number: \n");
    scanf("%d",&n);
    a=pali(n); 
    if(a==1)
   {
    printf("%d is palindrome ",n);
   }
   else
   {
   printf("%d is not palindrome ",n);
   }
 return 0;
}
int pali(int x)
{ 
    int r,s=0,temp=x; 
    while(x>0)
    {
      r=x%10;
      s=(s*10)+r;
      x=x/10;
    }
    if(temp==s)
    {
    return 1;
    }
    else
    {
    return 0;
    }
    
}
