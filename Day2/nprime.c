#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,c,n;
    printf("\n Enter the Nth Value : ");
    scanf("%d",&a);

    for(n = 1 ; n <= a ; n++)
    {
        c = 0;
        for(i = 2 ; i <= n / 2 ; i++)
        {
            if(n % i == 0)
            {
                c++;
                break;
            }
        }
        if( c == 0 && n!= 1)
        printf("%d, ",n);
    }
return 0;
}