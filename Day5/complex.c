/*7.	Declare a structure to represent a complex number
	( a number having real and imaginary part).

	Write function to add and multiply two complex numbers*/

#include <stdio.h>

struct complex_number { int real, imaginary ;};

    struct complex1 { int real1, imaginary1; };
    struct complex2 { int real2, imaginary2; };

struct complex_number calc;

void add ( struct complex1, struct complex2 );
void mul ( struct complex1, struct complex2 );

void main()
{
    struct complex1 x;
    struct complex2 y;
    
    printf("\n\nEnter 2 Complex numbers");

    printf("\n\n   Number 1\n\n");
    printf("Real   : ");
    scanf("%d", &x.real1);
    printf("Img    : ");
    scanf("%d", &x.imaginary1);

    printf("\n\n   Number 2\n\n");
    printf("Real   : ");
    scanf("%d", &y.real2);
    printf("Img    : ");
    scanf("%d", &y.imaginary2);
    
    printf("\n Sum     = ");
    add ( x, y );
    
    printf("\n Product = ");
    mul ( x, y );
    
}

void add ( struct complex1 x, struct complex2 y )
{
    calc.real = x.real1 + y. real2;
    calc.imaginary = x.imaginary1 + y.imaginary2;
    printf(" %d + %di", calc.real, calc.imaginary);
}

void mul ( struct complex1 x, struct complex2 y )
{
    calc.real = ( x.real1 * y.real2 ) - ( x.imaginary1 * y.imaginary2 );
    calc.imaginary = ( x.real1 * y.imaginary2 ) + ( x.imaginary1 * y.real2 );
    printf(" %d + %di \n\n", calc.real, calc.imaginary);
}