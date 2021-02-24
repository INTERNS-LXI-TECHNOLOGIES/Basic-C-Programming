#include <math.h>
#include<stdio.h>
int main()
{
 float a,b,c,y;
 float r1,r2;
    printf("\nenter values for a"  " b" " c" ": " );
    scanf("%f" ,&a);
    scanf("%f" ,&b);
    scanf("%f" ,&c);
    y= b * b - 4 * a * c;
        
    if(y<0)
    {
    printf("roots of quadratic equations: ");
    printf("%.3f%+.3fi" ,-b/(2*a),sqrt(-y)/(2*a));
     printf(",%.3f%+.3fi",-b/(2*a),-sqrt(-y)/(2*a));
     return 0;
    }
    else if(y==0)
    {
        printf("both roots are equal");
        r1= -b/(2*a);
        printf("equation is:%.3f",r1);
        return 0;
    }
    else
    {
     printf("roots are real");
     r1=(-b+sqrt(y))/(2*a);
     r2=(-b-sqrt(y))/(2*a);
     printf("\nroots are:%.3f , %.3f ",r1,r2);
    }
    
    return 0;
}