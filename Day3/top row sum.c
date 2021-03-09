/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to find sum of top row of matrix.
*******************************************************************************/
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("enter the no.of rows and columns for the matrix: \n");
    scanf("%d %d",&r,&c);
    printf("enter the elements for the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n The matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
         sum=sum+a[i][j];
               
        }
        break; 
    }
    printf("sum of 1st top row is: %d",sum);
    
    return 0;
}