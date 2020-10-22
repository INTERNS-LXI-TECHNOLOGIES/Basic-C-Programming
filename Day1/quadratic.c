#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r,i;
    float x,y;
    
    printf("\n Enter the coefficients of X^2, x & the constant : ");
    scanf("%d %d %d",&a,&b,&c);
    d = (b * b) - 4 * a * c ;

    if (d<0)
    {
        r = -b / (2 * a);
        i = sqrt(-d) / (2 * a);
        printf("\n The roots are imaginary.");
        printf("\n Root 1 = %f+%f and Root 2 = %f-%fi \n\n", r, i, r, i);
    }
    if (d==0)
    {
        x = y = -b / (2 * a);
        printf("\n Root 1 = Root 2 = %f;", x);
        printf("\n Both roots are equal.\n\n");
    }
    if (d>0)
    {
        printf("\n The roots are distinct");
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("\n The roots are %f , %f .\n\n",x,y);
    }
    return 0;
}