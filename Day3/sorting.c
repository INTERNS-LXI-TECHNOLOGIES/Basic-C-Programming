/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
.Program to sort an array.
*******************************************************************************/
#include<stdio.h>
int main()
{
    int limit,a[10],i,j,min=0;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("Enter the values:\n");
    for(i=0;i<limit;i++)
    {
       scanf("%d",&a[i]);  
    }
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
        if(a[i]>a[j])
        {
            min=a[i];
            a[i]=a[j];
            a[j]=min;
        
        }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<limit;i++)
    {
    printf("\t %d",a[i]);
    }
}




