/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with argument ,with return value.
*****************************************************************************/
#include<stdio.h>
int addNumber(int x,int y);
int main()
{
    int n1,n2,sum;
    printf("enter 2 numbers: \n");
    scanf("%d %d",&n1,&n2);
    sum=addNumber(n1,n2);
    printf("sum of %d and %d = %d",n1,n2,sum);
    return 0;
}
int addNumber(int x,int y)
{
    int result;
    result=x+y;
    return result;
    
}
  

