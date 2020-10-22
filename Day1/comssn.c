#include<stdio.h>
#include<math.h>
int main()
{
    int sales,a,b, bonus;
    double cmsn,d;
    a=10000;
    b=30000;
    bonus=1000;
    
    printf("\n\n Enter the sales : ");
    scanf("%d",&sales);

    if (sales >= 30000)
    {
        cmsn = 0.25*sales;
        d=cmsn+bonus;
        printf("\n The Commission is : %f + Bonus %d = %f",cmsn,bonus,d);
    }
    else if (sales >= a && sales < b)
    {
        cmsn = 0.15*sales;
        printf("\n The Commission is : %f",cmsn);
    }
    else
    {
        printf("\n No Commission.");
    }
    
    return 0;
}