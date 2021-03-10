/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with argument ,with return value.
*****************************************************************************/
#include<stdio.h>
void addNumber();
void proNumber();
int main()
{
    addNumber();
    proNumber();
    return 0;
}
void addNumber()
{
    int n1,n2,sum;
    printf("enter 2 numbers: \n");
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    printf("sum of %d and %d = %d \n",n1,n2,sum);
    
}
void proNumber()
{
    int n,product;
    printf("enter the value for n :");
    scanf("%d",&n);
    product=n*n;
    printf("square of %d is :%d ",n,product);
}
  

