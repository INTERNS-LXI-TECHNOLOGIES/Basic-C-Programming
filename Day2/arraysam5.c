/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//run time initialisation//
#include <stdio.h>
int main()
{
    
    int a[5],i;
    printf("enter the values:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }  
    printf("odd numbers are:\n");
    for(i=0;i<5;i++)
    {   
        if(a[i]%2!=0)
        {
           printf(" %d\t ",a[i]); 
        }
         
    }
        return 0;
}
