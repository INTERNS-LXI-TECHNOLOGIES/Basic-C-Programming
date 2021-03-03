/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
to chechk given number is string number or not?
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i,fact,temp,r,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        fact=1;
        for(i=r;i>=1;i--)
        {
         fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
       
    }
    
    if(temp==sum)
    {
        printf("%d is strong number",temp);
        
    }
    else
    {
        printf("%d is not a strong number",temp);
    }
   
    return 0;
}