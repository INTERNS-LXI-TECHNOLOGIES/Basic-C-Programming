/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to find sum of array elements up to the limit (Argument and return type)
*******************************************************************************/
#include<stdio.h>
int arrSum(int x[20],int n);
int main()
{
    int a[20],n,i,s;
    printf("enter the limit: \n");
    scanf("%d",&n);
    printf("enter the numbers : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=arrSum(a,n);
    printf("sum: %d",s);
    return 0;
}
int arrSum(int x[20],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
    sum=sum+x[i];
    }
    return sum;
}