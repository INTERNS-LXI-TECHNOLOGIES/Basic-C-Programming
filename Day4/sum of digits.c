/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
1.Program to find sum of digits of given number? ( No argument and no return type)
*******************************************************************************/
#include<stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int num,s=0,rem;
    printf("enter the number: \n");
    scanf("%d",&num);
    while(num>0)
    {
    rem=num%10;
    s=s+rem;
    num=num/10;
    }
    printf("sum: %d \n",s);
}