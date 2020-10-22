#include<stdio.h>
int main()
{
    int a,b;
    b=180;

    printf("\n Enter the number : ");
    scanf("%d",&a);

    if ((a*a)<=b)
    {
        printf("\n The square of %d is %d",a,a*a);
        
    }
    else if ((a*a)>b))
    {
        printf("\n The Square greater than 180");
    }
    else
    {
        /* code */
    }
        
    return 0;
}