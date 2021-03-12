/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
2.Program to print multiplication table ?( No argument and no return type)
*******************************************************************************/
#include<stdio.h>
void mul();
int main()
{
    mul();
    return 0;
}
void mul()
{
    int n,i,p,limit;
    printf("enter n: \n");
    scanf("%d",&n);
    printf("enter limit :\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        p=i*n;
        printf("%d * %d = %d \n",i,n,p);
    }
}