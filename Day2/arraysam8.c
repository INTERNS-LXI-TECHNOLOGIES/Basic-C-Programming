/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//run time initialisation//
#include <stdio.h>
int main()
{
    int arr[5],i,sum=0;
    printf("enter the 5 values:");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("the sum is:");
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    } 
    printf("%d",sum);
        return 0;
}
