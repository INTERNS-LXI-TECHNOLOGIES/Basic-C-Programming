/* 5.	Program to convert entered inches into equivalent feet and inches 
using function. */

#include <stdio.h>

float feet ( float );

void main()
{
    int ft;
    float in, i;

    printf("\n\n Enter inches : ");
    scanf("%f", &in);
    if ( in == 12 )
    {
        printf("\n 12 inches = 1 feet \n\n");
    }
    else if ( in < 12 )
    {
        printf("\n 0 ft %f inches \n", in);
        printf("\n 12 inches = 1 feet \n\n");
    }
    else
    {
    ft = feet ( in );
    }
    
}

float feet ( float in )
{
    int feet;
    float inch,inc;

    
        feet = in * 0.083333;
    
        inc = ( in - 12.000024) / 12;
        inch = inc * 12.000024;

        while ( inch > 12 )
        {
            inch = inch - 12;
            feet++;
        }
   
        printf("\n %d feet &", feet);
        printf(" %f inches\n\n", inch);
    

}