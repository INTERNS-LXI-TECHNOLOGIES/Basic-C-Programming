/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to search a number from an array..
*******************************************************************************/

#include <stdio.h>
int main()
{

    int i,a[5],n,c=0;
    printf("enter the numbers:");
    for(i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter a number to be searched:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
           c=1;
           break; 
        }
                
    }
    if(c==1)
    {
         printf("\n number %d is found.",n); 
    }
    else
    {
    printf("\n %d is not found",n);
    }
    return 0;
}
