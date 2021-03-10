/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
with argument ,with return value.
*****************************************************************************/
#include<stdio.h>
void even(int x);
int main()
{
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int x)
{
    if(x%2==0)
    {
        printf("%d is an even number ",x);
    }
    else
    {
            printf("%d is an odd number",x);
    }
        
}
  

