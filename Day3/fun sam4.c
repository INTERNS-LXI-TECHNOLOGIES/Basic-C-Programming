/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with argument ,without return value.
*****************************************************************************/
#include<stdio.h>
void addNumber(int x,int y);
int main()
{
    int n1,n2;
    printf("enter 2 numbers: \n");
    scanf("%d %d",&n1,&n2);
    addNumber(n1,n2);
    return 0;
}
void addNumber(int x,int y)
{
    
    int result;
    result=x+y;
    printf(" result=%d",result);
}
  

