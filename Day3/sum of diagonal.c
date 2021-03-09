/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,sum=0;
    printf("enter the no.of rows and columns for the matrix: \n");
    scanf("%d %d",&n,&m);
    if(n==m)
    {
    printf("enter the elements for the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n The matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }printf("sum of diagonal is: %d",sum);
    }
    }
    else
    {
        printf("not a square matrix");
    }
    return 0;
}