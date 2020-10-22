#include<stdio.h>
int main()
{
    int a,mark[6],total=0,m;
    float p;
    
    printf("\n Maximum Mark  : "); 
    scanf("%d", &m);

    printf("\n Enter the Mark 1 : "); 
    scanf("%d", &mark[0]);
    printf("\n Enter the Mark 2 : "); 
    scanf("%d", &mark[1]);
    printf("\n Enter the Mark 3 : "); 
    scanf("%d", &mark[2]);
    printf("\n Enter the Mark 4 : "); 
    scanf("%d", &mark[3]);
    printf("\n Enter the Mark 5 : "); 
    scanf("%d", &mark[4]);
    printf("\n Enter the Mark 6 : "); 
    scanf("%d", &mark[5]);

    for(a=0;a<6;a++)
    { 
        total += mark[a];
    }
    
    p = (total*100)/m;

    if (total>m)
    {
        printf("\n Calculation Error...!!!");
    }
    else
    {
        printf("\n Total Mark  : %d",m ); 

        printf("\n Obtained Mark  : %d",total );

        printf("\n Percentage  : %.2f%%",p ); 

        printf("\n");

        if (p >= 50)
        {
            printf(" Result : Passed");
        }
        else
        {
            printf(" Result : Failed");
        }
 
    }
    return 0;
}