/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    
    int mark[5],i;
    printf("enter 5 values: ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&mark[i]);
    }
    printf(" values are ..\n");
    for(i=0;i<5;i++)
    {
    printf("\t %d ",mark[i]);
    }
    
        return 0;
}
