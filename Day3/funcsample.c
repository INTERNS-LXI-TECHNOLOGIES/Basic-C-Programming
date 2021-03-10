/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with argument ,with return value.
*****************************************************************************/
#include<stdio.h>
void addNumber();
int main()
{
    addNumber();
    addNumber();
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
  

