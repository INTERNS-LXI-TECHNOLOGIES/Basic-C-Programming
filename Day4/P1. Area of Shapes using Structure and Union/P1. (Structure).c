
//Program to find Area of square ,Rectangle ,Triangle and Circle using Structure

#include <stdio.h>

int main()
{
    struct dimension
    {
        float l,b,h,r ; // length , Breadth, Height , Radius ;
    } a ;

    float area ;
    int op ;

    printf(" \n Choose Shape to find Area : \n \n (1) Square \n (2) Rectangle \n (3) Triangle \n (4) Circle \n \n : ") ;
    scanf("%d",&op) ;

    switch (op)
    {
    case 1 :
        printf("\n Input Length of Side of the Square : ") ;
        scanf("%f",&a.l) ;
        area = a.l*a.l ;
        break ;

    case 2 :
        printf("\n Input Length of Rectangle : ") ;
        scanf("%f",&a.l) ;
        printf("\n Input Breadth of Rectangle : ") ;
        scanf("%f",&a.b) ;
        area = a.l*a.b ;
        break ;

    case 3 :
        printf("\n Input Base length of Triangle : ") ;
        scanf("%f",&a.b) ;
        printf("\n Input Height of Triangle : ") ;
        scanf("%f",&a.h) ;
        area = a.b*a.h*0.5 ;
        break ;

    case 4 :
        printf("\n Input Radius of the Triangle : ") ;
        scanf("%f",&a.r) ;
        area = 3.14*a.r*a.r ;
        break ;

    default :
        printf("\n Invalid Option Chosen.") ;

    }

    printf("\n \n Area : %f",area);

}
