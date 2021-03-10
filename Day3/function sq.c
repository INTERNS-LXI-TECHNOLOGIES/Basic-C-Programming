/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with argument ,with return value.
*****************************************************************************/
#include<stdio.h>
int sqNumber(int x);
int main()
{
    int n,p;
    printf("enter n:\n");
    scanf("%d",&n);
    p=sqNumber(n);
    printf("square of %d is :%d",n,p);
    return 0;
}
int sqNumber(int x)
{
    int result;
    result=x*x;
    return result;
    
}
  

