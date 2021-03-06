/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.Program to find largest of n numbers up to the limit.


*******************************************************************************/

#include <stdio.h>
int main()
{
    int i,limit,a[10],max;
     
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("\n Enter the values: ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
     max=a[0];
    for(i=1;i<limit;i++)
    {
        if(max<a[i])
        {
        max=a[i];
        } 
    }
    printf("\nThe largest number is :%d",max);
   
    return 0;
}
