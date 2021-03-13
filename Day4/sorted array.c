/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to sort an array (Argument & no return type)
*******************************************************************************/
#include<stdio.h>
void sort(int x[20],int n);
int main()
{
    int limit,arr[20],i,n;
    printf("enter the limit: \n");
    scanf("%d",&n);
    printf("enter the values : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d \n",&arr[i]);
    }
    sort(arr,n);
    return 0;
}
void sort(int x[20],int n)
{
    int i,j,min=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(x[i]>x[j])
        {
            min=x[i];
            x[i]=x[j];
            x[j]=min;
        
        }
        }
    }
    
   printf("sorted array is : \n");
    for (i=0;i<n;i++)
    {
        printf(" \t%d",x[i]);
    } 
}