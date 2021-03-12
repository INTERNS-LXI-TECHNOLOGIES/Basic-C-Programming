/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
5.Program to find reverse of a given number? (Argument & Return type)
*******************************************************************************/
#include<stdio.h>
int reverse(int x);
int main()
{
    int num,rev;
    printf("enter the number : \n");
    scanf("%d",&num);
    rev=reverse(num);
    printf("reverse of %d is: %d \n",num,rev);
    return 0;
}
int reverse(int x)
{
    int rem,rev=0;
    while(x>0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
     return rev;
}