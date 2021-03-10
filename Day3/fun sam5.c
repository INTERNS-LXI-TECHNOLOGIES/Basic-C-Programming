/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
without argument ,with return value.
*****************************************************************************/
#include<stdio.h>
int addNumber();
int main()
{
    int c;
    c=addNumber();
    printf("sum:%d",c);
    return 0;
}
int addNumber()
{
    int n1,n2,result;
    printf("enter 2 numbers: \n");
    scanf("%d %d",&n1,&n2);
    result=n1+n2;
    return result;
}
  

