/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with argument ,with return value.
*****************************************************************************/
#include<stdio.h>
void neg(int x);
int main()
{
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    neg(n);
    return 0;
}
void neg(int x)
{
    if(x>0)
    {
        printf("%d is an positive number ",x);
    }
    else 
    {
            printf("%d is an negative number",x);
    }
        
}
  

