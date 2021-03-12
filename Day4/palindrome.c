/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to check whether the given number is palindrome or not? (Argument & return type)
*******************************************************************************/
#include<stdio.h>
int pali(int x);
int main()
{
    int n,a,temp,s;
    printf("enter the number: \n");
    scanf("%d",&n);
    temp=n;
    a=pali(n);
    if(temp==a)
    {
    printf("it is palindrome number",a);
    }
    else
    {
        printf("it is not a palindrome number",a);
    }
    return 0;
    
}
int pali(int x)
{ 
    int r,s=0; 
    while(x>0)
    {
      r=x%10;
      s=(s*10)+r;
      x=x/10;
    }
    return s;
    
}