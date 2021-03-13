#include<stdio.h>
int prime(int x);
int main()
{
    int a,b,i,flag;
    printf("enter a and b :\n");
    scanf("%d %d",&a,&b);
    printf("prime numbers are: ");
    for(i=a+1;i<b;++i)
    {
        flag=prime(i);
        if(flag==1)
        printf("\t %d ",i);
    }
    return 0;
}
int prime(int x)
{
    int j,flag=1;
    for(j=2;j<=x/2;++j)
    {
        if(x%j==0)
        {
            flag=0;
            break;
            
        }
        
    }
    return flag;
}