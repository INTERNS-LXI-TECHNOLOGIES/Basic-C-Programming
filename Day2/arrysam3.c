/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//run time initialisation//
#include <stdio.h>
int main()
{
    
    int mark[2][4],i,j;
    
    for(i=0;i<2;i++)
    {
    for(j=0;j<4;j++)
    {
    printf("enter values for %d %d:",i,j);
    scanf("%d",&mark[i][j]);    
    }
    }
    printf("two dimensional array is \n");
   
    for(i=0;i<2;i++)
    {
    for(j=0;j<4;j++)
    {
    printf("%d\n",mark[i][j]);
    }
    }
        return 0;
}
