/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.Program to find sum of 10 numbers.
*******************************************************************************/

#include <stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("\n Sum of 10 numbers..\n");
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum is:");
    for(i=0;i<10;i++)
    {
    sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
