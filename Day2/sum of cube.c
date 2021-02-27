/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to check whether the given number is perfect or not ?
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,sq,cu,s=0,rem;
    printf("\n enter num:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        cu=rem*rem*rem;
        s=s+cu;
        num=num/10;
    }
        printf("\n sum: %d",s);
    return 0;
}
