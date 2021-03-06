/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
..Program to separate Even numbers and Odd numbers in an array.


*******************************************************************************/

#include <stdio.h>
int main()
{
    int a[10],i;
    printf("\n Sum of 10 numbers..\n");
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("\n even numbers:");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
        printf("\t%d",a[i]);
        }
       
    }
    printf("\n odd numbers: ");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
        printf("\t%d",a[i]);
        }
    
    }
    return 0;
}
