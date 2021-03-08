/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Program to find sum of two matrices
*******************************************************************************/
#include<stdio.h>
int main()
{ 
    int a[10][10],b[10][10],c[10][10],i,j,k,p,q,m,n;
    printf("enter the no.of rows and column for matrix a:\n");
    scanf("%d %d",&n,&m);
    printf("enter the no.of rows and column for matrix b:\n");
    scanf("%d %d",&p,&q);
    if(m==p)
    {
        printf("enter the elements for 1st matrix:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf(" 1st matrix is:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("\t %d",a[i][j]);
            }
            printf("\n");
        }
        printf("enter the elements for 2nd matrix:\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("2nd matrix is:\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("\t %d",b[i][j]);
            }
            printf("\n");
        }
        
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
                c[i][j]=a[i][k]+b[k][j];
            }
        }
    }
    printf("the sum of 2 matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d \t",c[i][j]);
        }
    printf("\n");
    }
    }
    else
    {
    printf("addition is not possible ");
    }
    
 return 0;   
}




