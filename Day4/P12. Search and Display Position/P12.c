// Program to search for a particular element and display the position of the search element using function.

#include<stdio.h>

void Search(int a[10]) ;

void main()
{
    int n[10] ;
    for(int i=0; i<10;i++)
    {
        printf("\n Input Number %d : ",i+1) ;
        scanf("%d",&n[i]) ;
    }

    Search(n) ;

}

void Search(int a[10])
{
    int s,flag=0 ;

    printf(" \n Input Number to be Searched : ") ;
    scanf("%d",&s) ;


    for(int i=0;i<10;i++)
    {
        if(a[i]==s)
        {
            printf("\n The Number is found in the Array at Position : %d \n",i+1) ;
            flag =1 ;
        }

    }

    if(flag == 0)
        {
            printf("\n The Number is NOT FOUND in the Array. \n ") ;
        }
}
