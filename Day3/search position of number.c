/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to find the position of search number in an array .
*******************************************************************************/

#include <stdio.h>
int main()
{

    int i,a[100],n,c=0,limit; 
    printf("enter the limit: ");
    scanf("%d",&limit);
    printf("enter the numbers:");
    for(i=0;i<limit;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter a number to be searched:");
    scanf("%d",&n);
    for(i=0;i<limit;i++)
    {
        if(a[i]==n)
        {
           c=1;
           break; 
        }
                
    }
    if(c==1)
    {
         printf("\n number %d is found at the position %d",n,i+1); 
    }
    else
    {
    printf("\n %d not found aat the position %d",n);
    }
    return 0;
}
