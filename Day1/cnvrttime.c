#include<stdio.h>
int main()
{
    int m;
    printf("\n\n Enter minutes : ");
    scanf("%d",&m);
    printf("\n %d Minutes is %d Hour %d Minutes",m,m/60,m%60);
    printf("\n %d Minutes is %d Seconds",m,m*60);
    printf("\n.");
}