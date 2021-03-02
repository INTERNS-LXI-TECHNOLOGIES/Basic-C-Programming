/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it
To generate patterns.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf(" * ");
            
        }    
       printf("\n");
    }
    
    return 0;
}